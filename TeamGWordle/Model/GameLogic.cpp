#include "GameLogic.h"
#include <algorithm>
#include <unordered_map>

namespace Model
{
	GameLogic::GameLogic()
	{
		this->gamePlayWord = "";
	}

	GameLogic::~GameLogic()
	{
	}

	void GameLogic::userGuess(int wordLength)
	{
		std::string word;

		std::cin >> word;
		std::cout << word << std::endl;
	}

	void GameLogic::toUpper(std::string& str)
	{
		for (char& c : str)
		{
			c = toupper(c);
		}
	}

	void GameLogic::setGamePlayWord(const std::string guessWord)
	{
		this->gamePlayWord = guessWord;
	}

	std::vector<LetterResult> GameLogic::checkGuess(const std::string guessedWord)
	{
		std::vector<LetterResult> results(guessedWord.length());
		std::string guess = guessedWord;
		std::string correct = this->gamePlayWord;

		std::transform(guess.begin(), guess.end(), guess.begin(), ::tolower);
		std::transform(correct.begin(), correct.end(), correct.begin(), ::tolower);

		std::unordered_map<char, int> unmatchedLetters;

		for (int i = 0; i < correct.length(); ++i)
		{
			if (i >= guess.length() || guess[i] != correct[i])
			{
				unmatchedLetters[correct[i]]++;
			}
		}
		for (int i = 0; i < guess.length(); ++i)
		{
			results[i].letter = guess[i];

			if (i < correct.length() && guess[i] == correct[i])
			{
				results[i].status = MatchStatus::Correct;
			}
			else if (unmatchedLetters[guess[i]] > 0)
			{
				results[i].status = MatchStatus::Present;
				unmatchedLetters[guess[i]]--;
			}
			else
			{
				results[i].status = MatchStatus::Absent;
			}
		}
		return results;
	}
}
