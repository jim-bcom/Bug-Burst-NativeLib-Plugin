

#pragma once

#include "TestPluginClass.g.h"
#include "winrt/impl/TestPlugin.0.h"


namespace winrt::TestPlugin::implementation
{
    struct TestPluginClass : TestPluginClassT<TestPluginClass>
    {
        TestPluginClass() = default;

        bool Test();
        uint32_t add(uint32_t& a, uint32_t& b);
    };
}
namespace winrt::TestPlugin::factory_implementation
{
    struct TestPluginClass : implementation::TestPluginClassT<TestPluginClass, implementation::TestPluginClass>
    {
    };
}
