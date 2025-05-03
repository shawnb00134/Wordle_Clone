#include "GameController.h"
#include "../Utils/WordDictionaryReader.h"
#include "../Utils/UserFileReader.h"
#include "../Model/GameLogic.h"
#include "../Model/Player.h"
#include <string>
#include <random>
#include <unordered_map>
#include <algorithm>

using namespace utils;

namespace controller
{
	GameController::GameController(std::string& username)
	{
		this->wordMap = utils::WordDictionaryReader::getWordLengthMap(DICTIONARY);
		this->correctWord = "";
		this->attempts = 0;
		this->gameLogic = new Model::GameLogic();
		this->player = utils::UserFileReader::getUserAccount(controller::USER_ACCOUNTS, username);
		this->enableCharRepetition = this->player.getLetterReuseValue();
	}

	GameController::~GameController()
	{
		if (this->gameLogic)
		{
			delete this->gameLogic;
			this->gameLogic = nullptr;
		}
	}

	void GameController::startGame()
	{
		this->correctWord = utils::WordDictionaryReader::getRandomWord(this->wordMap, controller::DEFAULT_WORD_LENGTH,
		                                                               this->enableCharRepetition);
		this->attempts = 0;

		while (this->attempts < controller::MAX_ATTEMPTS)
		{
			this->gameLogic->userGuess(controller::DEFAULT_WORD_LENGTH);
			this->attempts++;
		}
		this->gameLogic->setGamePlayWord(this->correctWord);
	}

	const std::string GameController::getCorrectWord()
	{
		return this->correctWord;
	}

	void GameController::setEnableCharRepetition(bool enable)
	{
		this->enableCharRepetition = enable;
	}

	bool GameController::getEnableCharRepetition() const
	{
		return this->enableCharRepetition;
	}

	bool GameController::isValidWord(const std::string& word) const
	{
		std::string lowerWord = word;
		std::transform(lowerWord.begin(), lowerWord.end(), lowerWord.begin(), ::toupper);

		auto it = wordMap.find(static_cast<int>(lowerWord.length()));
		if (it == wordMap.end()) return false;

		const std::vector<std::string>& wordList = it->second;
		return std::find(wordList.begin(), wordList.end(), lowerWord) != wordList.end();
	}

	std::vector<LetterResult> GameController::enteredWord(const std::string enteredWord)
	{
		std::vector<LetterResult> results = this->gameLogic->checkGuess(enteredWord);

		return results;
	}

	void GameController::gamesPlayed(Model::GameCode gameCode, int roundGuess)
	{
		this->player.addGamesPlayed(gameCode, roundGuess);
	}

	void GameController::setPlayerReuseLetters()
	{
		this->player.setReuseLetters(this->enableCharRepetition);
	}

	bool GameController::getPlayerReuseLetters()
	{
		return this->player.getLetterReuseValue();
	}

	const Model::Player* GameController::getPlayer()
	{
		return &this->player;
	}

	void GameController::saveUserStats()
	{
		utils::UserFileReader::saveUserOut(controller::USER_ACCOUNTS, this->player);
	}

	const int GameController::getWordLength()
	{
		return controller::DEFAULT_WORD_LENGTH;
	}

	const int GameController::getMaxAttempts()
	{
		return controller::MAX_ATTEMPTS;
	}
}
