/* A standard layout for the Dactyl Manuform 5x6 Keyboard */ 

#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _L1 1
#define _L2 2
#define _MAC 3
#define _L5 5
#define _L6 6

#define L1 MO(_L1)
#define L2 MO(_L2)

#define MAC TG(_MAC)

#define L5 MO(_L5)
#define L6 MO(_L6)



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_5x6(
     KC_GRV , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,       KC_MINS,
     KC_LALT, KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,       KC_BSLS,
     KC_LEAD, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,       KC_QUOT,
     LCA(KC_DEL), KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,LSFT(KC_MINS), KC_EQL,
                      RCS(KC_TAB),C(KC_TAB),                                                       S(KC_TAB), KC_TAB,
                                      LGUI_T(KC_TAB),LSFT_T(KC_ESC),        KC_SPC, KC_ENT,
                                      L2,     L1,                           KC_BSPC,  KC_LCTL,
                                      MAC, KC_LCTL,                          LSFT(KC_SCLN), KC_SLASH
  ),

  [_L1] = LAYOUT_5x6(
     _______,_______, _______ ,_______,_______ ,_______,                        _______,_______,_______,_______,_______,_______,
     _______,_______,_______,S(KC_9),S(KC_0),KC_MUTE,                        C(KC_LEFT), _______ , _______ , C(KC_RIGHT) ,_______,_______,
     _______,_______,_______,KC_LBRC,KC_RBRC ,KC_VOLU,                        KC_LEFT, KC_DOWN , KC_UP , KC_RIGHT, _______, _______,
     _______,_______,_______,S(KC_LBRC),S(KC_RBRC), KC_VOLD,                  KC_HOME, KC_PGDN , KC_PGUP , KC_END ,_______ ,_______,
                                             _______,_______,            _______, _______,
                                             _______,_______,            _______,_______,
                                             _______,_______,            KC_DEL,_______,
                                             _______,_______,            _______,_______

  ),

  [_L2] = LAYOUT_5x6(
     KC_F1,KC_F2, KC_F3 ,KC_F4,KC_F5,KC_F6,                             KC_F7,KC_F8,KC_F9, KC_F10,KC_F11,KC_F12,
     _______,_______,_______,_______,_______,_______,                        _______, _______ , _______ , _______ ,_______,_______,
     _______,_______,_______,_______, _______ ,_______,                  _______, _______ , _______ , _______, _______, _______,
     _______,_______,_______,_______, _______, _______,                  _______, _______ , _______ , _______ ,_______ ,_______,
                                             _______,_______,            _______, _______,
                                             _______,_______,            _______,_______,
                                             _______,_______,            _______,_______,
                                             _______,_______,            _______,_______
  ),

  [_MAC] = LAYOUT_5x6(
     KC_GRV , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,       KC_MINS,
     KC_LALT, KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,       KC_BSLS,
     KC_LEAD, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,       KC_QUOT,
     C(KC_Z), KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,LSFT(KC_MINS), KC_EQL,
                      RCS(KC_TAB),C(KC_TAB),                                                       C(KC_LEFT), C(KC_RIGHT),
                                      LCTL_T(KC_TAB),LSFT_T(KC_ESC),        KC_SPC, KC_ENT,
                                      L2,     L1,                           KC_BSPC,  KC_LCTL,
                                      _______, KC_LGUI,                          LSFT(KC_SCLN), KC_SLASH
  ),

  [_L5] = LAYOUT_5x6(
     _______,_______, _______ ,_______,_______ ,_______,                        _______,_______,_______,_______,_______,_______,
     _______,_______,_______,S(KC_9),S(KC_0),KC_MUTE,                        A(KC_LEFT), _______ , _______ , A(KC_RIGHT) ,_______,_______,
     _______,_______,_______,KC_LBRC,KC_RBRC ,KC_VOLU,                        KC_LEFT, KC_DOWN , KC_UP , KC_RIGHT, _______, _______,
     _______,_______,_______,S(KC_LBRC),S(KC_RBRC), KC_VOLD,                  G(KC_LEFT), KC_PGDN , KC_PGUP , G(KC_RIGHT) ,_______ ,_______,
                                             _______,_______,            _______, _______,
                                             _______,_______,            _______,_______,
                                             _______,_______,            KC_DEL,_______,
                                             _______,_______,            _______,_______

  ),

  [_L6] = LAYOUT_5x6(
     KC_F1,KC_F2, KC_F3 ,KC_F4,KC_F5,KC_F6,                             KC_F7,KC_F8,KC_F9, KC_F10,KC_F11,KC_F12,
     _______,_______,_______,_______,_______,_______,                        _______, _______ , _______ , _______ ,_______,_______,
     _______,_______,_______,_______, _______ ,_______,                  _______, _______ , _______ , _______, _______, _______,
     _______,_______,_______,_______, _______, _______,                  _______, _______ , _______ , _______ ,_______ ,_______,
                                             _______,_______,            _______, _______,
                                             _______,_______,            _______,_______,
                                             _______,_______,            _______,_______,
                                             _______,_______,            _______,_______
  )
};