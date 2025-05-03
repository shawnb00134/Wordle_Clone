#pragma once

/// <summary>
/// Controller namespace.
/// </summary>
namespace controller
{
	/// <summary>
	/// SoundController class.
	/// </summary>
	class SoundController
	{
	private:

	public:
		/// <summary>
		/// Initializes a new instance of the <see cref="SoundController"/> class.
		/// </summary>
		SoundController();
		/// <summary>
		/// Finalizes an instance of the <see cref="SoundController"/> class.
		/// </summary>
		~SoundController();
		/// <summary>
		/// Plays the winning sound.
		/// </summary>
		void playWinningSound();
		/// <summary>
		/// Plays the losing sound.
		/// </summary>
		void playLosingSound();
	};
}
