#include "WordDictionaryReader.h"
#include <fstream>
#include <sstream>
#include <random>
#include <unordered_set>

namespace utils
{
	std::map<int, std::vector<std::string>> WordDictionaryReader::getWordLengthMap(const std::string& filePath)
	{
		std::map<int, std::vector<std::string>> wordLengthMap;
		std::ifstream file(filePath);

		if (!file.is_open())
		{
			throw std::runtime_error("Could not open file: " + filePath);
		}

		std::string word;
		while (file >> word)
		{
			int length = word.length();
			wordLengthMap[length].push_back(WordDictionaryReader::toUpperCase(word));
		}

		file.close();
		return wordLengthMap;
	}

	std::string WordDictionaryReader::getRandomWord(const std::map<int, std::vector<std::string>>& wordLengthMap,
	                                                int length, bool repetitionAllowed)
	{
		auto it = wordLengthMap.find(length);
		if (it != wordLengthMap.end() && !it->second.empty())
		{
			const auto& words = it->second;
			std::vector<std::string> filteredWords;
			if (repetitionAllowed)
			{
				filteredWords = words;
			}
			else
			{
				filteredWords = WordDictionaryReader::getUniqueWordList(words);
			}
			static std::random_device rd;
			static std::mt19937 gen(rd());
			std::uniform_int_distribution<> dist(0, filteredWords.size() - 1);
			int randomIndex = dist(gen);
			return filteredWords[randomIndex];
		}
		return "";
	}

	std::vector<std::string> WordDictionaryReader::getUniqueWordList(const std::vector<std::string>& words)
	{
		std::vector<std::string> filteredWords;
		for (const auto& word : words)
		{
			std::unordered_set<char> charSet(word.begin(), word.end());
			if (charSet.size() == word.length())
			{
				filteredWords.push_back(word);
			}
		}
		return filteredWords;
	}

	std::string WordDictionaryReader::toUpperCase(std::string& str)
	{
		for (char& c : str)
		{
			c = toupper(c);
		}
		return str;
	}
}
