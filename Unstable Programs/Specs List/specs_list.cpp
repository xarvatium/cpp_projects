#include <limits.h>
#include <iostream>
#include <intrin.h>
#include <Windows.h>

int main () {
    int CPUInfo[4] = {-1};
    unsigned nExIds, i = 0;
    char CPUBrandString[0x40];
// Get info related to each ID
    __cpuid(CPUInfo, 0x8000000);
    nExIds = CPUInfo[0];
    for(i=0x8000000; i<nExIds; ++i) {
        __cpuid(CPUInfo, i);
// The line of code that interprets the CPU brand
        if(i == 0x80000002)
            memcpy(CPUBrandString, CPUInfo, sizeof(CPUInfo));
        else if (i == 0x80000003)
            memcpy(CPUBrandString + 16, CPUInfo, sizeof(CPUInfo));
        else if (i == 0x80000004)
            memcpy(CPUBrandString + 32, CPUInfo, sizeof(CPUInfo));
    }
// Manufacturer, model, and clock speed
    std::cout << "CPU Type: " << CPUBrandString << "\n";

SYSTEM_INFO sysInfo;
    GetSystemInfo(&sysInfo);
    std::cout << "Number of Cores: " << sysInfo.dwNumberOfProcessors << "\n";
MEMORYSTATUSEX statex;
    statex.dwLength = sizeof(statex);
    GlobalMemoryStatusEx(&statex);
    std::cout << "Total System Memory: " << (statex.ullTotalPhys/1024)/1024 << "MB" << "\n";


}