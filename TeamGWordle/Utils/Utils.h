#pragma once
#include <string>
#pragma comment(lib, "Advapi32.lib")

/// <summary>
/// Converts a System::String^ to a standard string.
/// </summary>
/// <param name="string"></param>
/// <returns></returns>
std::string toStandardString(System::String^ string);

/// <summary>
/// Checks if the system is in dark mode.
/// </summary>
/// <returns> true if the system is in dark mode, false if not.</returns>
bool IsSystemInDarkMode();
