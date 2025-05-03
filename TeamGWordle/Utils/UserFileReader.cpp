#include "UserFileReader.h"
#include "../Model/Player.h"
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

namespace utils
{
	Model::Player UserFileReader::getUserAccount(const std::string& filePath, std::string& username)
	{
		System::Diagnostics::Debug::WriteLine("Load Started");
		std::ifstream file(filePath);
		std::string line;

		if (!file.is_open())
		{
			throw std::runtime_error("Could not open file: " + filePath);
		}

		while (std::getline(file, line))
		{
			System::Diagnostics::Debug::WriteLine("Load Started");
			std::stringstream stream(line);
			std::string fileUsername;

			while (getline(stream, fileUsername, ','))
			{
				if (fileUsername == username)
				{
					std::string reuseLettersStr, gamesPlayedStr, gamesWonStr, currentStreakStr, longestStreakStr,
					            winDistribution;
					if (getline(stream, reuseLettersStr, ',') &&
						getline(stream, gamesPlayedStr, ',') &&
						getline(stream, gamesWonStr, ',') &&
						getline(stream, currentStreakStr, ',') &&
						getline(stream, longestStreakStr, ',') &&
						getline(stream, winDistribution))
					{
						System::Diagnostics::Debug::WriteLine("Parsing");
						bool reuseLetters = (reuseLettersStr == "true");
						int gamesPlayed = std::stoi(gamesPlayedStr);
						int gamesWon = std::stoi(gamesWonStr);
						int currentStreak = std::stoi(currentStreakStr);
						int longestStreak = std::stoi(longestStreakStr);
						return Model::Player(fileUsername, reuseLetters, gamesPlayed, gamesWon, currentStreak,
						                     longestStreak, winDistribution);
					}
				}
			}
		}
		System::Diagnostics::Debug::WriteLine("Load Ended");
		return Model::Player(username); // Return a default player if not found
	}

	void UserFileReader::saveUserOut(const std::string& filePath, Model::Player player)
	{
		System::Diagnostics::Debug::WriteLine("Character Save Called");

		std::vector<std::string> lines;
		std::string line;
		std::ifstream fileIn(filePath);
		bool userFound = false;

		if (player.getName().empty())
		{
			System::Diagnostics::Debug::WriteLine("Username is empty");
			return;
		}

		if (!fileIn.is_open())
		{
			throw std::runtime_error("Could not open file: " + filePath);
		}

		while (std::getline(fileIn, line))
		{
			std::stringstream stream(line);
			std::string fileUsername;

			if (std::getline(stream, fileUsername, ','))
			{
				if (player.getName() == fileUsername)
				{
					lines.push_back(player.toString());
					userFound = true;
					System::Diagnostics::Debug::WriteLine("User found and updated.");
				}
				else
				{
					lines.push_back(line);
				}
			}
			else
			{
				lines.push_back(line);
			}
		}

		fileIn.close();
		System::Diagnostics::Debug::WriteLine("FileIn closed");

		if (!userFound)
		{
			lines.push_back(player.toString());
			System::Diagnostics::Debug::WriteLine("User not found, added new user.");
		}

		std::ofstream fileOut(filePath);

		if (!fileOut.is_open())
		{
			throw std::runtime_error("Could not open file for writing: " + filePath);
		}

		for (const auto& outputLine : lines)
		{
			fileOut << outputLine << std::endl;
		}

		fileOut.close();
		System::Diagnostics::Debug::WriteLine("Outfile closed");
	}
}
