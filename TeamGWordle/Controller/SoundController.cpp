#include "SoundController.h"

#include <windows.h>
#include <mmsystem.h>

#pragma comment(lib, "winmm.lib")

namespace controller
{
	SoundController::SoundController()
	{
	}

	SoundController::~SoundController()
	{
	}

	void SoundController::playWinningSound()
	{
		PlaySound(TEXT("soundWin1.wav"), NULL, SND_FILENAME | SND_ASYNC);
	}

	void SoundController::playLosingSound()
	{
		PlaySound(TEXT("soundGameOver.wav"), NULL, SND_FILENAME | SND_ASYNC);
	}
}
