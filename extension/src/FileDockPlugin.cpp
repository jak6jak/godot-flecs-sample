#include "FileDockPlugin.h"
#include "godot_cpp/classes/editor_plugin.hpp"
#include "godot_cpp/classes/label.hpp"
#include "godot_cpp/classes/v_box_container.hpp"
#include "godot_cpp/core/memory.hpp"

using namespace godot;



FileDockPlugin::FileDockPlugin(){

    vbox = memnew(VBoxContainer);
    EditorPlugin::add_control_to_dock(DOCK_SLOT_LEFT_UR, vbox);
    testLabel = memnew(Label);
    testLabel->set_text("Hello!");
    vbox->add_child(testLabel );


}

FileDockPlugin::~FileDockPlugin(){

}

void FileDockPlugin::_notification(int p_what){

}
void FileDockPlugin::_bind_methods(){

}