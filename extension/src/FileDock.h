#pragma once

#include "godot_cpp/classes/control.hpp"
#include "godot_cpp/classes/wrapped.hpp"
class FileDock : public godot::Control {
    GDCLASS(FileDock, Control)

    public:
    FileDock();
    ~FileDock();



    protected:
        static void _bind_methods();
};