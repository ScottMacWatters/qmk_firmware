#include QMK_KEYBOARD_H

// https://github.com/qmk/qmk_firmware/blob/master/quantum/send_string_keycodes.h
// https://beta.docs.qmk.fm/using-qmk/advanced-keycodes/feature_macros

enum custom_keycodes {
    /* IntelliJ Refactor Section */
    SAFE_DELETE = SAFE_RANGE,
    EXTRACT_VAR,
    EXTRACT_CONST,
    EXTRACT_PARAM,
    EXTRACT_METHOD,
    INLINE,
    RENAME,
    CHANGE_SIGNATURE,
    MOVE,

    /* IntelliJ Debug Section */
    DEBUG_RUN,
    DEBUG_STOP,
    DEBUG_CONTINUE,
    DEBUG_CURRENT,
    DEBUG_OVER,
    DEBUG_INTO,
    DEBUG_OUT,


    /* Misc Convenience */ 
    PW_APPLE123,
    PW_APPLE234,
    SC_111111,
    SMACWATTERS,
    LOCK,

    /* Navigation and App Shortcuts */
    MISSION_CONTROL,
    APP_VIEW,
    SPACE_RIGHT,
    SPACE_LEFT,

    SLACK,
    INTELLIJ,
    VSCODE,
    SAFARI,
    WEBEX,
    CHROME,
    
    /* Emoji */
    THUMBS_UP,
    WAVE,



};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case SAFE_DELETE:
        if (record->event.pressed) {
            SEND_STRING(SS_LGUI(SS_TAP(X_DELETE))); // GUI DEL
        }
        break;

    case EXTRACT_VAR:
        if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_LGUI("v"))); // alt gui v 
        }
        break;

    case EXTRACT_CONST:
        if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_LGUI("c"))); // alt gui c 
        }
        break;

    case EXTRACT_PARAM:
        if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_LGUI("p"))); // alt gui p 
        }
        break;

    case EXTRACT_METHOD:
        if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_LGUI("m"))); // alt gui m 
        }
        break;

    case INLINE:
        if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_LGUI("n"))); // alt gui n 
        }
        break;

    case RENAME:
        if (record->event.pressed) {
            SEND_STRING(SS_LSFT(SS_TAP(X_F6))); // shift f6
        }
        break;

    case CHANGE_SIGNATURE:
        if (record->event.pressed) {
            SEND_STRING(SS_LGUI(SS_TAP(X_F6))); // gui f6
        }
        break;

    case MOVE:
        if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_F6)); // f6
        }
        break;

    case DEBUG_RUN:
        if (record->event.pressed) {
            SEND_STRING(SS_LGUI("r"));  // gui r
        }
        break;

    case DEBUG_STOP:
        if (record->event.pressed) {
            SEND_STRING(SS_LGUI(SS_TAP(X_F2))); // gui f2
        }
        break;

    case DEBUG_CONTINUE:
        if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_LGUI("r"))); // alt gui r 
        }
        break;

    case DEBUG_CURRENT:
        if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_TAP(X_F10))); // alt f10
        }
        break;

    case DEBUG_OVER:
        if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_F8)); // f8 
        }
        break;

    case DEBUG_INTO:
        if (record->event.pressed) {
            SEND_STRING(SS_TAP(X_F7)); // f7
        }
        break;

    case DEBUG_OUT:
        if (record->event.pressed) {
            SEND_STRING(SS_LSFT(SS_TAP(X_F8))); // shift f8
        }
        break;

    case PW_APPLE123:
        if (record->event.pressed) {
            SEND_STRING("Apple123+\n");
        }
        break;

    case PW_APPLE234:
        if (record->event.pressed) {
            SEND_STRING("Apple*234\n");
        }
        break;

    case SC_111111:
        if (record->event.pressed) {
            SEND_STRING("111111");
        }
        break;

    case SMACWATTERS:
        if (record->event.pressed) {
            SEND_STRING("smacwatters+@apple.com" SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) 
                SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) 
                SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_LEFT) 
                SS_TAP(X_LEFT));
        }
        break;

    case LOCK:
        if (record->event.pressed) {
            SEND_STRING(SS_LGUI(SS_LCTL("q"))); // cmd ctrl q 
        }
        break;

    case MISSION_CONTROL:
        if (record->event.pressed) {
            SEND_STRING(SS_LCTL(SS_TAP(X_UP)));
        }
        break;

    case APP_VIEW:
        if (record->event.pressed) {
            SEND_STRING(SS_LCTL(SS_TAP(X_DOWN)));
        }
        break;
    
    case SPACE_RIGHT:
        if (record->event.pressed) {
            SEND_STRING(SS_LCTL(SS_TAP(X_RIGHT)));
        }
        break;
        
    case SPACE_LEFT:
        if (record->event.pressed) {
            SEND_STRING(SS_LCTL(SS_TAP(X_LEFT)));
        }
        break;

    case SLACK:
        if (record->event.pressed) {
            SEND_STRING(SS_LGUI(" ") SS_DELAY(100) "Slack" );
        }
        break;

    case INTELLIJ:
        if (record->event.pressed) {
            SEND_STRING(SS_LGUI(" ") SS_DELAY(100) "IntelliJ Idea Ultimate");
        }
        break;

    case VSCODE:
        if (record->event.pressed) {
            SEND_STRING(SS_LGUI(" ") SS_DELAY(100) "Visual Studio Code");
        }
        break;

    case SAFARI:
        if (record->event.pressed) {
            SEND_STRING(SS_LGUI(" ") SS_DELAY(100) "Safari");
        }
        break;
    
    case WEBEX:
        if (record->event.pressed) {
            SEND_STRING(SS_LGUI(" ") SS_DELAY(100) "Webex");
        }
        break;
        
    case CHROME:
        if (record->event.pressed) {
            SEND_STRING(SS_LGUI(" ") SS_DELAY(100) "Google Chrome");
        }
        break;

    case THUMBS_UP:
        if (record->event.pressed) {
            SEND_STRING(SS_LGUI(SS_LCTL(" ")) SS_DELAY(100) "Thumbs Up" SS_DELAY(500) SS_TAP(X_DOWN));
        }
        break;

    case WAVE:
        if (record->event.pressed) {
            SEND_STRING(SS_LGUI(SS_LCTL(" ")) SS_DELAY(100) "waving hand" SS_DELAY(500) SS_TAP(X_DOWN));
        }
        break;
    }

    return true;
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Layer 0, default layer
__________________________________________________________________________________________________________________________________  ________
|        |        |        |        |        |        |        |        |        |        |        |        |        |            ||        |
|  ESC   |   F1   |   F2   |   F3   |   F4   |   F5   |   F6   |   F7   |   F8   |   F9   |  F10   |  F11   |  F12   |  DELETE    ||  HOME  |
|________|________|________|________|________|________|________|________|________|________|________|________|________|____________||________|
|        |        |        |        |        |        |        |        |        |        |        |        |        |            ||        |
|  ~`    |   1    |   2    |   3    |   4    |   5    |   6    |   7    |   8    |   9    |   0    |  _ -   | =  +   | BACKSPACE  ||  PGUP  |
|________|________|________|________|________|________|________|________|________|________|________|________|________|____________||________|
|            |        |        |        |        |        |        |        |        |        |        |  [     |   ]    |        ||        |
|     TAB    |   Q    |   W    |   E    |   R    |   T    |   Y    |   U    |   I    |   O    |   P    |  {     |   }    |  |   \ ||  PGDN  |
|____________|________|________|________|________|________|________|________|________|________|________|________|________|________||________|
  |            |        |        |        |        |        |        |        |        |        |   ;    |   '    |            |   |        |
  |    CAPS    |   A    |   S    |   D    |   F    |   G    |   H    |   J    |   K    |   L    |   :    |   "    |   ENTER    |   |  END   |
  |____________|________|________|________|________|________|________|________|________|________|________|________|____________|___|________|
  |                |        |        |        |        |        |        |        |   ,    |    .   |   /    |            |        |
  |     SHIFT      |   Z    |   X    |   C    |   V    |   B    |   N    |   M    |   <    |    >   |   ?    |     FN     |   UP   |
  |________________|________|________|________|________|________|________|________|________|________|________|____________|________|_________
  |            |        |       |        |                 |                 |        |        |             |   |        |        |        |
  |    CTRL    |  LALT  | FN    | LGUI   |    FN           |      SPACE      | RCTRL  |  RALT  |     FN      |   |  LEFT  |  DOWN  | RIGHT  |
  |____________|________|_______|________|_________________|_________________|________|________|_____________|   |________|________|________|
*/

  [0] = LAYOUT(
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,       KC_HOME,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,      KC_PGUP,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,  KC_PGDN,
          KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,    KC_ENT,       KC_END,
          KC_LSFT,     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,    MO(4),    KC_UP,
          KC_LCTL, KC_LALT, MO(1),   KC_LGUI,     MO(2),           KC_SPC,     KC_RCTL,   KC_RALT,   MO(3),         KC_LEFT, KC_DOWN, KC_RGHT
  ),

    /* Layer 1, function layer
__________________________________________________________________________________________________________________________________  ________
|        |        |        |        |        |        |        |        |        |        |        |        |        |            ||        |
| RESET  |        |        |        |        |        |        |        |        |        |        |        |        |            ||        |
|________|________|________|________|________|________|________|________|________|________|________|________|________|____________||________|
|        |        |        |        |        |        |        |        |        |        |  LED   |  LED   |  LED   |            ||   BRI  |
|        |        |        |        |        |        |        |        |        |        | TOGGLE |  DOWN  |  UP    |            ||   UP   |
|________|________|________|________|________|________|________|________|________|________|________|________|________|____________||________|
|            |        |        |        |        |        |        |        |        |        |        |        |        |        ||   BRI  |
|            |   LOCK |        |        |        |        |        |        |        |        |        |        |        |        ||   DOWN |
|____________|________|________|________|________|________|________|________|________|________|________|________|________|________||________|
  |            |        |        |        |        |        |        |        |        |        |        |        |            |   |        |
  |            |        |        |        |        |        |        |        |        |        |        |        |   PLAYPAUS |   |        |
  |____________|________|________|________|________|________|________|________|________|________|________|________|____________|___|________|
  |                |        |        |        |        |        |        |        |        |        |        |            |   VOL  |
  |                |        |        |        |        |        |        |        |        |        |        |            |   UP   |
  |________________|________|________|________|________|________|________|________|________|________|________|____________|________|_________
  |            |        |       |        |                 |                 |        |        |             |   |        |   VOL  |        |
  |            |        |       |        |                 |                 |        |        |             |   |  PREV  |  DOWN  | NEXT   |
  |____________|________|_______|________|_________________|_________________|________|________|_____________|   |________|________|________|

* 'RESET' resets the controller and puts the board into firmware flashing mode. If this key is hit accidentally, just unplug the board
*        and plug it back in.
*/

  [1] = LAYOUT(
    RESET,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_TOG, RGB_VAD, RGB_VAI, KC_NO,     KC_BRIU,
        KC_NO, LOCK, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BRID,
          KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO,    KC_MPLY,     KC_NO,
              KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,  KC_VOLU,
          KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO,          KC_NO,      KC_NO, KC_NO, KC_NO,       KC_HOME,  KC_VOLD, KC_END
  ),


    /* Layer 2, Macro layer
__________________________________________________________________________________________________________________________________  ________
|        |        |        |        |        |        |        |        |        |        |        |        |        |            ||        |
|        |  PW123 |  PW234 |        |        |        |        |        |        |        |        |        |        |  SAFE_DEL  ||  WAVE  |
|________|________|________|________|________|________|________|________|________|________|________|________|________|____________||________|
| smac   |        |        |        |        |        |        |        |        |        |        |        |        |            ||        |
| @app   | 111111 |        |        |        |        |        |        |        |        |        |        |        |            ||THUMBSUP|
|________|________|________|________|________|________|________|________|________|________|________|________|________|____________||________|
|            |        |        |        |        |        |        |        |        |        | EXTRCT |        |        |        ||        |
|            |        |        |        | RENAME |        |        |        | INLINE |        | PARAM  |        |        |        ||        |
|____________|________|________|________|________|________|________|________|________|________|________|________|________|________||________|
  |            |        | CHANGE |        | EXTRCT |        |        |        |        |        |        |        |            |   |        |
  |            |        | SIGNAT |        | FUNC   |        | SPACE_L|APP_VIEW|MISS_CON|SPACE_R |        |        |            |   |        |
  |____________|________|________|________|________|________|________|________|________|________|________|________|____________|___|________|
  |                |        |        | EXTRCT | EXTRCT |        |        |        |        |        |        |            |        |
  |                |        |        | CONST  | VAR    |        |        |  MOVE  |        |        |        |            |        |
  |________________|________|________|________|________|________|________|________|________|________|________|____________|________|_________
  |            |        |       |        |                 |                 |        |        |             |   |        |        |        |
  |            |        |       |        |                 |                 |        |        |             |   |        |        |        |
  |____________|________|_______|________|_________________|_________________|________|________|_____________|   |________|________|________|


*/

  [2] = LAYOUT(
    KC_NO,   PW_APPLE123, PW_APPLE234, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, SAFE_DELETE,     WAVE,
    SMACWATTERS, SC_111111, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     THUMBS_UP,
        KC_NO, KC_NO, KC_NO, KC_NO, RENAME, KC_NO, KC_NO, KC_NO, INLINE, KC_NO, EXTRACT_PARAM, KC_NO, KC_NO, KC_NO, KC_NO,
          KC_NO, KC_NO, CHANGE_SIGNATURE, KC_NO, EXTRACT_METHOD, KC_NO, SPACE_LEFT, APP_VIEW, MISSION_CONTROL, SPACE_RIGHT, KC_NO, KC_NO,    KC_NO,     KC_NO,
              KC_NO, KC_NO, KC_NO, EXTRACT_CONST, EXTRACT_VAR, KC_NO, KC_NO, MOVE, KC_NO, KC_NO, KC_NO,   KC_NO,  KC_NO,
          KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO,          KC_NO,      KC_NO, KC_NO, KC_NO,       KC_NO,  KC_NO, KC_NO
  ),

    /* Layer 3, Debug Layer
__________________________________________________________________________________________________________________________________  ________
|        |        |        |        |        |        |        |        |        |        |        |        |        |            || DEBUG  |
|        |        |        |        |        |        |        |        |        |        |        |        |        |            ||CURRENT |
|________|________|________|________|________|________|________|________|________|________|________|________|________|____________||________|
|        |        |        |        |        |        |        |        |        |        |        |        |        |            ||        |
|        |        |        |        |        |        |        |        |        |        |        |        |        | DEBUG STOP ||        |
|________|________|________|________|________|________|________|________|________|________|________|________|________|____________||________|
|            |        |        |        |        |        |        |        |        |        |        |        |        |        ||        |
|            |        |        |        |        |        |        |        |        |        |        |        |        |        ||        |
|____________|________|________|________|________|________|________|________|________|________|________|________|________|________||________|
  |            |        |        |        |        |        |        |        |        |        |        |        |            |   |        |
  |            |        |        |        |        |        |        |        |        |        |        |        | DEBUG CONT |   |        |
  |____________|________|________|________|________|________|________|________|________|________|________|________|____________|___|________|
  |                |        |        |        |        |        |        |        |        |        |        |            | DEBUG  |
  |                |        |        |        |        |        |        |        |        |        |        |            | OUT    |
  |________________|________|________|________|________|________|________|________|________|________|________|____________|________|_________
  |            |        |       |        |                 |                 |        |        |             |   | DEBUG  | DEBUG  | DEBUG  |
  |            |        |       |        |                 |                 |        |        |             |   | RUN    | IN     | OVER   |
  |____________|________|_______|________|_________________|_________________|________|________|_____________|   |________|________|________|


*/

  [3] = LAYOUT(
    KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     DEBUG_CURRENT,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, DEBUG_STOP,     KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
          KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,    DEBUG_CONTINUE,     KC_NO,
              KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,  DEBUG_OUT,
          KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO,          KC_NO,      KC_NO, KC_NO, KC_NO,       DEBUG_RUN,  DEBUG_INTO, DEBUG_OVER
  ),

    /* Layer 4, App Layer
__________________________________________________________________________________________________________________________________  ________
|        |        |        |        |        |        |        |        |        |        |        |        |        |            ||        |
|        |        |        |        |        |        |        |        |        |        |        |        |        |            ||        |
|________|________|________|________|________|________|________|________|________|________|________|________|________|____________||________|
|        |        |        |        |        |        |        |        |        |        |        |        |        |            ||        |
|        |        |        |        |        |        |        |        |        |        |        |        |        |            ||        |
|________|________|________|________|________|________|________|________|________|________|________|________|________|____________||________|
|            |        |        |        |        |        |        |        |        |        |        |        |        |        ||        |
|            |        |  WEBEX |        |        |        |        |        |        |        |        |        |        |        ||        |
|____________|________|________|________|________|________|________|________|________|________|________|________|________|________||________|
  |            |        |        |        |        |        |        |        |        |        |        |        |            |   |        |
  |            | SAFARI |  SLACK |INTELLIJ|        |        |        |        |        |        |        |        |            |   |        |
  |____________|________|________|________|________|________|________|________|________|________|________|________|____________|___|________|
  |                |        |        |        |        |        |        |        |        |        |        |            |        |
  |                |        |        | CHROME | VSCODE |        |        |        |        |        |        |            |        |
  |________________|________|________|________|________|________|________|________|________|________|________|____________|________|_________
  |            |        |       |        |                 |                 |        |        |             |   |        |        |        |
  |            |        |       |        |                 |                 |        |        |             |   |        |        |        |
  |____________|________|_______|________|_________________|_________________|________|________|_____________|   |________|________|________|


*/

  [4] = LAYOUT(
    KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO,
        KC_NO, KC_NO, WEBEX, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
          KC_NO, SAFARI, SLACK, INTELLIJ, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,    KC_NO,     KC_NO,
              KC_NO, KC_NO, KC_NO, CHROME, VSCODE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,  KC_NO,
          KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO,          KC_NO,      KC_NO, KC_NO, KC_NO,       KC_NO,  KC_NO, KC_NO
  ),
};

