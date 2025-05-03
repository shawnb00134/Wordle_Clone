#pragma once
#include <string>
#include <vector>
#include <map>
#include <iostream>
#include "../Model/GameLogic.h"
#include "../Model/Player.h"

namespace Model
{
	class GameLogic;
	class Player;
}

/// <summary>
/// MatchStatus enum.
/// </summary>
public enum class MatchStatus
{
	Correct, // Green
	Present, // Yellow
	Absent // Gray
};

/// <summary>
/// LetterResult struct.
/// </summary>
public struct LetterResult
{
	char letter;
	MatchStatus status;
};

/// <summary>
/// Controller namespace.
/// </summary>
namespace controller
{
	const int MAX_ATTEMPTS = 6;
	const int DEFAULT_WORD_LENGTH = 5;
	const std::string USER_ACCOUNTS = "Assets/useraccounts.txt";
	const std::string DICTIONARY = "Assets/dictionary.txt";

	/// <summary>
	/// Controller class.
	/// </summary>
	class GameController
	{
	private:
		std::map<int, std::vector<std::string>> wordMap;
		std::string correctWord;
		int attempts;
		bool enableCharRepetition;
		Model::GameLogic* gameLogic;
		Model::Player player;

	public:
		/// <summary>
		/// Initializes a new instance of the <see cref="Controller"/> class.
		/// </summary>
		/// <param name="username">The username.</param>
		GameController(std::string& username);
		/// <summary>
		/// Finalizes an instance of the <see cref="Controller"/> class.
		/// </summary>
		~GameController();
		/// <summary>
		/// Starts the game.
		/// </summary>
		void startGame();
		/// <summary>
		/// Sets the enable character repetition.
		/// </summary>
		/// <param name="enable">if set to <c>true</c> [enable].</param>
		void setEnableCharRepetition(bool enable);
		/// <summary>
		/// Gets the enable character repetition.
		/// </summary>
		/// <returns>the character repetition value</returns>
		bool getEnableCharRepetition() const;
		/// <summary>
		/// Gets the correct word.
		/// </summary>
		/// <returns>the correct word for the game play.</returns>
		const std::string getCorrectWord();
		/// <summary>
		/// Determines whether [is valid word] [the specified word].
		/// </summary>
		/// <param name="word">The word.</param>
		/// <returns>
		///   <c>true</c> if [is valid word] [the specified word]; otherwise, <c>false</c>.
		/// </returns>
		bool isValidWord(const std::string& word) const;
		/// <summary>
		/// Entereds the word.
		/// </summary>
		/// <param name="enteredWord">The entered word.</param>
		/// <returns>Vector with letterResult</returns>
		std::vector<LetterResult> enteredWord(const std::string enteredWord);
		/// <summary>
		/// Gameses the played.
		/// </summary>
		/// <param name="gameCode">The game code.</param>
		/// <param name="roundGuess">The round guess.</param>
		void gamesPlayed(Model::GameCode gameCode, int roundGuess);
		/// <summary>
		/// Sets the player reuse letters.
		/// </summary>
		void setPlayerReuseLetters();
		/// <summary>
		/// Gets the player reuse letters.
		/// </summary>
		/// <returns>the reuse letters value</returns>
		bool getPlayerReuseLetters();
		/// <summary>
		/// Gets the player.
		/// </summary>
		/// <returns>the pointer to the player</returns>
		const Model::Player* getPlayer();
		/// <summary>
		/// Saves the user stats.
		/// </summary>
		void saveUserStats();
		/// <summary>
		/// Gets the length of the word.
		/// </summary>
		/// <returns>the word length</returns>
		const int getWordLength();
		/// <summary>
		/// Gets the maximum attempts.
		/// </summary>
		/// <returns>the max allowed attempts</returns>
		const int getMaxAttempts();
	};
}
