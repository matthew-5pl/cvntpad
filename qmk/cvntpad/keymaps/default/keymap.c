// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define MIDI_ADVANCED

extern MidiDevice midi_device;

#define MIDI_CC_OFF 0
#define MIDI_CC_ON  127

enum custom_keycodes {
    MIDI_CC80 = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch(keycode) {
    case MIDI_CC80:
        
        if(record->event.pressed) {
            midi_send_cc(&midi_device, 0, 127, MIDI_CC_ON);
            // midi_send_cc(&midi_device, 0, 127, MIDI_NOTE_CSHARP)
        } else {
            midi_send_cc(&midi_device, 0, 127, MIDI_CC_OFF);
        }
        return true;
    }
    return true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┐
     * │ A │ B │ C │
     * ├───┼───┼───┤
     * │ D │ E │ F │
     * ├───┼───┼───┤
     * │ G │ H │ I │
     * └───┴───┴───┘
     */
    [0] = LAYOUT_ortho_3x3(
        KC_A,    KC_B,    MIDI_CC80,
        KC_D,    KC_E,    KC_F,
        KC_G,    KC_H,    KC_I
    )
};
