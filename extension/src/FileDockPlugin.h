#pragma once

#include "godot_cpp/classes/control.hpp"
#include "godot_cpp/classes/editor_plugin.hpp"
#include "godot_cpp/classes/label.hpp"
#include "godot_cpp/classes/v_box_container.hpp"
#include "godot_cpp/classes/wrapped.hpp"
#include "godot_cpp/variant/string.hpp"
namespace godot {

    class FileDockPlugin : public EditorPlugin {
        GDCLASS(FileDockPlugin, EditorPlugin)


        protected:
            void _notification(int p_what);
            Control BaseControl;
            VBoxContainer *vbox = nullptr;
            Label *testLabel = nullptr;
            
        public:

        static void _bind_methods();

        virtual String _get_plugin_name() const override{
            return "AdvancedFileDock";
        }

        virtual bool _has_main_screen() const override{
            return false;
        }

        FileDockPlugin();
        ~FileDockPlugin();
    };

}