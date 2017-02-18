#pragma once

class CFxHelper
{
public:
	static bool CanInstallDotNet4_5();
	static bool IsDotNet462OrHigherInstalled();
	static HRESULT InstallDotNetFramework(bool isQuiet);
private:
	static HRESULT HandleRebootRequirement(bool isQuiet);
	static bool WriteRunOnceEntry();
	static bool RebootSystem();
};

