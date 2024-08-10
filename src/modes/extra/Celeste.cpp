#include "modes/extra/Celeste.hpp"

#include "core/socd.hpp"
#include "core/state.hpp"

Celeste::Celeste(socd::SocdType socd_type) {}

void Celeste::UpdateKeys(InputState &inputs) {
    if (!inputs.mod_y) {
        //Basic Movement
        Press(HID_KEY_ARROW_UP, inputs.mod_x);
        Press(HID_KEY_ARROW_LEFT, inputs.left);
        Press(HID_KEY_ARROW_DOWN, inputs.down);
        Press(HID_KEY_ARROW_RIGHT, inputs.right);

        //Jump
        Press(HID_KEY_C, inputs.x);

        //Grab&Climb
        Press(HID_KEY_Z, inputs.l);

        //Dash
        Press(HID_KEY_X, inputs.b);

        //Crouch Dash
        Press(HID_KEY_N, inputs.z);

        //Talk&Confirm
        Press(HID_KEY_M, inputs.a);

        //Pause
        Press(HID_KEY_ENTER, inputs.start);

        //Journal
        Press(HID_KEY_TAB, inputs.up);

        //Save points
        Press(HID_KEY_F7, inputs.r);
        Press(HID_KEY_F8, inputs.y);
        Press(HID_KEY_F4, inputs.midshield);

        //Map
        Press(HID_KEY_F6, inputs.lightshield);
    }

    if (inputs.mod_y) {
        //Room movement
        Press(HID_KEY_PAGE_DOWN, inputs.x);
        Press(HID_KEY_PAGE_UP, inputs.y);
    }


    /*
    Press(HID_KEY_F, inputs.mod_y);
    Press(HID_KEY_G, inputs.select);
    Press(HID_KEY_H, inputs.start);
    Press(HID_KEY_I, inputs.home);
    Press(HID_KEY_K, inputs.y);
    Press(HID_KEY_L, inputs.lightshield);
    Press(HID_KEY_M, inputs.midshield);
    Press(HID_KEY_J, inputs.b);
    Press(HID_KEY_P, inputs.z);
    Press(HID_KEY_Q, inputs.up);
    Press(HID_KEY_R, inputs.c_up);
    Press(HID_KEY_S, inputs.c_left);
    Press(HID_KEY_T, inputs.c_right);
    Press(HID_KEY_U, inputs.a);
    Press(HID_KEY_V, inputs.c_down);
    */
}
