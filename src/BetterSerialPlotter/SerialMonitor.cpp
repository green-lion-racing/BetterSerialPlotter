#include <BetterSerialPlotter/SerialMonitor.hpp>
#include <BetterSerialPlotter/BSP.hpp>

namespace bsp{

SerialMonitor::SerialMonitor(BSP* gui_): Widget(gui_){}

void SerialMonitor::render(){
    constexpr ImGuiWindowFlags serial_monitor_flags = ImGuiWindowFlags_HorizontalScrollbar;
    ImGui::Checkbox("Auto-Scroll",&auto_scroll);
    ImGui::BeginChild("Serial Monitor", ImVec2(-1, -1), true, serial_monitor_flags);
    {
        for (std::string message : messages){
            ImGui::Text(message.c_str());
        }
    }
    if (auto_scroll) ImGui::SetScrollY(ImGui::GetScrollMaxY());
    ImGui::EndChild();
}

} // namespace bsp