

#include "pch.h"
#include "TestPluginClass.h"

#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.ApplicationModel.Core.h>

extern "C"
HMODULE LoadLibraryA(
    LPCSTR lpLibFileName
);


using namespace std;

namespace winrt::TestPlugin::implementation
{
    bool Test()
    {
        return true;
    }

    uint32_t add(uint32_t& a, uint32_t& b)
    {
        return a + b;
    }
}
