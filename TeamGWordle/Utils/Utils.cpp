#include "Utils.h"
#include <Windows.h>
#include <Uxtheme.h>
#include <dwmapi.h>

using System::Runtime::InteropServices::Marshal;

/// \brief Converts a managed string to a standard (native) string
///	\precondition none
/// \param string The managed string to convert
/// \return The converted string as a standard(native) string
std::string toStandardString(System::String^ string)
{
	System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
	char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
	std::string returnString(charPointer, string->Length);
	Marshal::FreeHGlobal(pointer);

	return returnString;
}

bool IsSystemInDarkMode()
{
	DWORD value = 0;
	DWORD valueSize = sizeof(value);
	HKEY key;
	if (RegOpenKeyEx(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize", 0,
	                 KEY_READ, &key) == ERROR_SUCCESS)
	{
		if (RegQueryValueEx(key, L"AppsUseLightTheme", nullptr, nullptr, reinterpret_cast<LPBYTE>(&value), &valueSize)
			== ERROR_SUCCESS)
		{
			RegCloseKey(key);
			return value == 0;
		}
		RegCloseKey(key);
	}
	return false;
}
