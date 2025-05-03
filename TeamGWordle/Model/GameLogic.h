#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "../Controller/GameController.h"

struct LetterResult;

namespace Model
{
	/**
	 * GamePlay logic class
	 * This class contains the logic for the game play
	 * It contains the function to check the guessed word against the game play word
	 */
	class GameLogic
	{
	public:
		/**  
	    * Constructor  
	    */
		GameLogic();
		/**  
	    * Destructor  
	    */
		~GameLogic();
		/**  
	    * Player's guess  
	    */
		void userGuess(int wordLength);
		/**
	    * Check the guessed word against the game play word
	    * @param guessedWord The word entered by the player
	    * @return A vector of LetterResult containing the status of each letter in the guessed word
	    */
		std::vector<LetterResult> checkGuess(const std::string guessedWord);
		/**
		* Set the game play word
		* @param guessWord The word to be set as the game play word
		*/
		void setGamePlayWord(const std::string guessWord);

	private:
		void toUpper(std::string& str);
		std::string gamePlayWord;
	};
}
