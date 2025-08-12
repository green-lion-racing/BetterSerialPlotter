#pragma once

#include <BetterSerialPlotter/Widget.hpp>
#include <deque>

namespace bsp{

/// widget that renders the serial_monitor in the second tab of the
/// main area of the GUI
class SerialMonitor : public Widget
{
public:
    /// renders the imgui information for the widget
    void render();
    /// constructor which takes in pointer to the main gui
    SerialMonitor(BSP* gui_);
    /// contains current messages to be rendered
    std::deque<std::string> messages; 

private:
    bool auto_scroll = true; // defines whether serial monitor always scrolls to bottom or not
};

} // namespace bsp