#pragma once
#include "../Model/Player.h"

/// <summary>
/// utils namespace.
/// </summary>
namespace utils
{
	/// <summary>
	/// UserFileReader class.
	/// </summary>
	class UserFileReader
	{
	public:
		/// <summary>
		/// Gets the user account.
		/// </summary>
		/// <param name="filePath">The file path.</param>
		/// <param name="username">The username.</param>
		/// <returns></returns>
		static Model::Player getUserAccount(const std::string& filePath, std::string& username);

		/// <summary>
		/// Saves the user out.
		/// </summary>
		/// <param name="filePath">The file path.</param>
		/// <param name="player">The player.</param>
		static void saveUserOut(const std::string& filePath, Model::Player player);
	};
}
