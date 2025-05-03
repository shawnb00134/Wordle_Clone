#include <cmath>
#include <map>

#include "Player.h"

namespace Model
{
	Player::Player()
	{
		this->username = "";
		this->reuseLetters = false;
		this->gamesPlayed = 0;
		this->gamesWon = 0;
		this->currentWinStreak = 0;
		this->longestWinStreak = 0;
		this->guessDistribution = std::map<int, int>();
	}

	Player::Player(std::string& username)
	{
		this->username = username;
		this->reuseLetters = false;
		this->gamesPlayed = 0;
		this->gamesWon = 0;
		this->currentWinStreak = 0;
		this->longestWinStreak = 0;
		this->guessDistribution = std::map<int, int>();
	}

	Player::Player(const std::string& name, bool reuseLetters, int gamesPlayed, int gamesWon, int currentStreak,
	               int longestStreak, const std::string& winDistributionString)
	{
		this->username = name;
		this->reuseLetters = reuseLetters;
		this->gamesPlayed = gamesPlayed;
		this->gamesWon = gamesWon;
		this->currentWinStreak = currentStreak;
		this->longestWinStreak = longestStreak;
		this->guessDistribution = std::map<int, int>();

		this->loadWinDistribution(winDistributionString);
	}

	Player::~Player()
	{
	}

	void Player::setName(const std::string name)
	{
		this->username = name;
	}

	std::string Player::getName() const
	{
		return username;
	}

	void Player::setReuseLetters(bool reuseLettersValue)
	{
		this->reuseLetters = reuseLettersValue;
	}

	bool Player::getLetterReuseValue()
	{
		return this->reuseLetters;
	}

	void Player::setGamesPlayed(int gamesPlayed)
	{
		this->gamesPlayed = gamesPlayed;
	}

	int Player::getGamesPlayed() const
	{
		return this->gamesPlayed;
	}

	int Player::getWinStreak() const
	{
		return this->currentWinStreak;
	}

	int Player::getLongestWinStreak() const
	{
		return this->longestWinStreak;
	}

	int Player::getWinPercentage() const
	{
		int winPercentage = static_cast<int>(
			std::round((static_cast<double>(this->gamesWon) / this->gamesPlayed) * 100));
		System::Diagnostics::Debug::WriteLine("Win Percentage: " + System::Convert::ToString(winPercentage) + "%");
		return winPercentage;
	}

	std::map<int, int> Player::getGuessDistribution() const
	{
		return this->guessDistribution;
	}

	void Player::addGamesPlayed(GameCode gameCode, int guessRound)
	{
		if (gameCode == GameCode::Win)
		{
			this->gamesWon++;
			this->currentWinStreak++;

			if (this->currentWinStreak > this->longestWinStreak)
			{
				this->longestWinStreak = this->currentWinStreak;
			}

			this->addToGuessDistribution(guessRound);
		}

		if (gameCode == GameCode::Lose)
		{
			this->currentWinStreak = 0;
		}
		this->gamesPlayed++;

		System::Diagnostics::Debug::WriteLine(gcnew System::String(toString().c_str()));
	}

	void Player::addToGuessDistribution(int guessRound)
	{
		if (this->guessDistribution.find(guessRound) != this->guessDistribution.end())
		{
			this->guessDistribution[guessRound]++;
		}
		else
		{
			this->guessDistribution[guessRound] = 1;
		}
	}

	std::string Player::toString()
	{
		std::string returnStatement = this->username + "," + (this->reuseLetters ? "true" : "false") + "," +
			std::to_string(this->gamesPlayed) + "," + std::to_string(this->gamesWon) + "," +
			std::to_string(this->currentWinStreak) + "," + std::to_string(this->longestWinStreak) + "," + this->
			mapToString();

		return returnStatement;
	}

	std::string Player::mapToString()
	{
		std::string mapString = "{";
		for (const auto& pair : this->guessDistribution)
		{
			mapString += std::to_string(pair.first) + ":" + std::to_string(pair.second) + ",";
		}
		mapString += "}";

		return mapString;
	}

	void Player::loadWinDistribution(std::string winDistributionString)
	{
		this->guessDistribution.clear();
		std::string keyValuePair;
		size_t pos;
		if (winDistributionString.front() == '{' && winDistributionString.back() == '}')
		{
			winDistributionString = winDistributionString.substr(1, winDistributionString.length() - 2);
		}
		while ((pos = winDistributionString.find(',')) != std::string::npos)
		{
			keyValuePair = winDistributionString.substr(0, pos);
			size_t colonPos = keyValuePair.find(':');
			if (colonPos != std::string::npos)
			{
				int key = std::stoi(keyValuePair.substr(0, colonPos));
				int value = std::stoi(keyValuePair.substr(colonPos + 1));
				this->guessDistribution[key] = value;
			}
			winDistributionString.erase(0, pos + 1);
		}
		if (!winDistributionString.empty())
		{
			size_t colonPos = winDistributionString.find(':');
			if (colonPos != std::string::npos)
			{
				int key = std::stoi(winDistributionString.substr(0, colonPos));
				int value = std::stoi(winDistributionString.substr(colonPos + 1));
				this->guessDistribution[key] = value;
			}
		}
	}
}
