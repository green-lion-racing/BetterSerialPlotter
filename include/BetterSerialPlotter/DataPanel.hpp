#pragma once

#include <BetterSerialPlotter/Widget.hpp>

namespace bsp{

/// object for Data Panel on the left side of the GUI. Mainly handles
/// sizing and the editing of variable properties
class DataPanel : public Widget
{
private:
public:
    /// constructor that assigns the gui pointer
    DataPanel(BSP* gui_);
    
    /// render the imgui appearance
    void render();
};

} // namespace bsp