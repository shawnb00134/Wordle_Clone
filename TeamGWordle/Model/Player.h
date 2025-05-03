#pragma once
#include <string>
#include <map>

/// <summary>
/// Model namespace.
/// </summary>
namespace Model
{
	/// <summary>
	/// GameCode enum.
	/// </summary>
	enum class GameCode
	{
		Win,
		Lose
	};

	/// <summary>
	/// Player class.
	/// </summary>
	class Player
	{
	private:
		std::string username;
		bool reuseLetters;
		int gamesPlayed;
		int gamesWon;
		int currentWinStreak;
		int longestWinStreak;
		std::map<int, int> guessDistribution;
		void loadWinDistribution(std::string winDistributionString);
		std::string mapToString();

	public:
		/// <summary>
		/// Initializes a new instance of the <see cref="Player"/> class.
		/// </summary>
		Player();
		/// <summary>
		/// Initializes a new instance of the <see cref="Player"/> class.
		/// </summary>
		/// <param name="username">The username.</param>
		Player(std::string& username);
		/// <summary>
		/// Initializes a new instance of the <see cref="Player"/> class.
		/// </summary>
		/// <param name="name">The name.</param>
		/// <param name="reuseLetters">if set to <c>true</c> [reuse letters].</param>
		/// <param name="gamesPlayed">The games played.</param>
		/// <param name="gamesWon">The games won.</param>
		/// <param name="currentStreak">The current streak.</param>
		/// <param name="longestStreak">The longest streak.</param>
		/// <param name="winDistributionString">The win distribution string.</param>
		Player(const std::string& name, bool reuseLetters, int gamesPlayed, int gamesWon, int currentStreak,
		       int longestStreak, const std::string& winDistributionString);
		/// <summary>
		/// Finalizes an instance of the <see cref="Player"/> class.
		/// </summary>
		~Player();
		/// <summary>
		/// Sets the name.
		/// </summary>
		/// <param name="name">The name.</param>
		void setName(const std::string name);
		/// <summary>
		/// Gets the name.
		/// </summary>
		/// <returns>Gets the name of the player</returns>
		std::string getName() const;
		/// <summary>
		/// Sets the reuse letters.
		/// </summary>
		/// <param name="reuseLettersValue">if set to <c>true</c> [reuse letters value].</param>
		void setReuseLetters(bool reuseLettersValue);
		/// <summary>
		/// Gets the letter reuse value.
		/// </summary>
		/// <returns>the letter reuse value of the player</returns>
		bool getLetterReuseValue();
		/// <summary>
		/// Sets the games played.
		/// </summary>
		/// <param name="gamesPlayed">The games played.</param>
		void setGamesPlayed(int gamesPlayed);
		/// <summary>
		/// Gets the games played.
		/// </summary>
		/// <returns>Number of games played by the player</returns>
		int getGamesPlayed() const;
		/// <summary>
		/// Gets the win streak.
		/// </summary>
		/// <returns>Gets the number of win streak of the player</returns>
		int getWinStreak() const;
		/// <summary>
		/// Gets the longest win streak.
		/// </summary>
		/// <returns>Gets the longest win streak of the player</returns>
		int getLongestWinStreak() const;
		/// <summary>
		/// Gets the win percentage.
		/// </summary>
		/// <returns>Gets the win percentage for the player</returns>
		int getWinPercentage() const;
		/// <summary>
		/// Gets the guess distribution.
		/// </summary>
		/// <returns>A map with guess distribution for the wins of the games played by the player.</returns>
		std::map<int, int> getGuessDistribution() const;
		/// <summary>
		/// Adds the games played.
		/// </summary>
		/// <param name="gameCode">The game code.</param>
		/// <param name="guessRound">The guess round.</param>
		void addGamesPlayed(GameCode gameCode, int guessRound);
		/// <summary>
		/// Adds to guess distribution.
		/// </summary>
		/// <param name="guessRound">The guess round.</param>
		void addToGuessDistribution(int guessRound);
		/// <summary>
		/// To the string.
		/// </summary>
		/// <returns> string with player detailed statistics.</returns>
		std::string toString();
	};
}
