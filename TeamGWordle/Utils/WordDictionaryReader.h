#pragma once
#include <string>
#include <vector>
#include <map>

namespace utils
{
	/// <summary>
	/// WordDictionaryReader class.
	/// </summary>
	class WordDictionaryReader
	{
	public:
		/// <summary>
		/// Gets the word length map.
		/// </summary>
		/// <param name="filePath">The file path.</param>
		/// <returns>map of word with their word length as key and vector of all the words.</returns>
		static std::map<int, std::vector<std::string>> getWordLengthMap(const std::string& filePath);
		/// <summary>
		/// Gets the random word.
		/// </summary>
		/// <param name="wordLengthMap">The word length map.</param>
		/// <param name="length">The length.</param>
		/// <param name="repetitionAllowed">if set to <c>true</c> [repetition allowed].</param>
		/// <returns> a random word of the given word length for the game play.</returns>
		static std::string getRandomWord(const std::map<int, std::vector<std::string>>& wordLengthMap, int length,
		                                 bool repetitionAllowed);
		/// <summary>
		/// Gets the unique word list.
		/// </summary>
		/// <param name="words">The words.</param>
		/// <returns> a vector of string of words with no character repetition.</returns>
		static std::vector<std::string> getUniqueWordList(const std::vector<std::string>& words);
		/// <summary>
		/// To the upper case.
		/// </summary>
		/// <param name="str">The string.</param>
		/// <returns>the string with uppercase characters.</returns>
		static std::string toUpperCase(std::string& str);
	};
}
