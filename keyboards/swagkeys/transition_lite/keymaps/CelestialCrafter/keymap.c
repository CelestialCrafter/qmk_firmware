#include QMK_KEYBOARD_H

enum unicode_names { JP_A, JP_I, JP_U, JP_E, JP_O, JP_KA, JP_KI, JP_KU, JP_KE, JP_KO, JP_SA, JP_SI, JP_SU, JP_SE, JP_SO, JP_TA, JP_CHI, JP_TSU, JP_TE, JP_TO, JP_NA, JP_NI, JP_NU, JP_NE, JP_NO, JP_HA, JP_HI, JP_FU, JP_HE, JP_HO, JP_MA, JP_MI, JP_ME, JP_MO, JP_YA, JP_YU, JP_YO, JP_RA, JP_RI, JP_RU, JP_RE, JP_RO, JP_WA, JP_N, JP_VOICE };

const uint32_t PROGMEM unicode_map[] = {
    [JP_A] = 0x3042, // あ
    [JP_I] = 0x3044, // い
    [JP_U] = 0x3046, // う
    [JP_E] = 0x3048, // え
    [JP_O] = 0x304A, // お

    [JP_KA] = 0x304B, // か
    [JP_KI] = 0x304D, // き
    [JP_KU] = 0x304F, // く
    [JP_KE] = 0x3051, // け
    [JP_KO] = 0x3053, // こ

    [JP_SA] = 0x3055, // さ
    [JP_SI] = 0x3057, // し
    [JP_SU] = 0x3059, // す
    [JP_SE] = 0x305B, // せ
    [JP_SO] = 0x305D, // そ

    [JP_TA]  = 0x305F, // た
    [JP_CHI] = 0x3061, // ち
    [JP_TSU] = 0x3064, // つ
    [JP_TE]  = 0x3066, // て
    [JP_TO]  = 0x3068, // と

    [JP_NA] = 0x306A, // な
    [JP_NI] = 0x306B, // に
    [JP_NU] = 0x306C, // ぬ
    [JP_NE] = 0x306D, // ね
    [JP_NO] = 0x306E, // の

    [JP_HA] = 0x306F, // は
    [JP_HI] = 0x3072, // ひ
    [JP_FU] = 0x3075, // ふ
    [JP_HE] = 0x3078, // へ
    [JP_HO] = 0x307B, // ほ

    [JP_MA] = 0x307E, // ま
    [JP_MI] = 0x307F, // み
    [JP_ME] = 0x3081, // め
    [JP_MO] = 0x3082, // も

    [JP_YA] = 0x3084, // や
    [JP_YU] = 0x3086, // ゆ
    [JP_YO] = 0x3088, // よ

    [JP_RA] = 0x3089, // ら
    [JP_RI] = 0x308A, // り
    [JP_RU] = 0x308B, // る
    [JP_RE] = 0x308C, // れ
    [JP_RO] = 0x308D, // ろ

    [JP_WA]     = 0x308F, // わ
    [JP_N]      = 0x3093, // ん
    [JP_VOICE]  = 0x3099, // ゛
    [JP_SVOICE] = 0x309C  // ゜
};

enum layer_names { EN, JP, SPECIAL };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // clang-format off
    [EN] = LAYOUT_tkl_ansi(
        KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  TG(SPECIAL), KC_SCRL, KC_PAUS,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,     KC_INS,  KC_HOME, KC_PGUP,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,     KC_DEL,  KC_END,  KC_PGDN,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,              KC_UP,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, DF(JP),  KC_RCTL, KC_RGUI,     KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [JP] = LAYOUT_tkl_ansi(
        KC_ESC,    KC_F1,      KC_F2,     KC_F3,     KC_F4,     KC_F5,     KC_F6,     KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,       KC_F12,                 TG(SPECIAL), KC_SCRL, KC_PAUS,
        UM(JP_RO), UM(JP_NU),  UM(JP_FU), UM(JP_A),  UM(JP_U),  UM(JP_E),  UM(JP_O),  UM(JP_YA), UM(JP_YU), UM(JP_YO), UM(JP_WA), UM(JP_HO),    UM(JP_HE),     KC_BSPC,     KC_INS,  KC_HOME, KC_PGUP,
        KC_TAB,    UM(JP_TA),  UM(JP_TE), UM(JP_I),  UM(JP_SU), UM(JP_KA), UM(JP_N),  UM(JP_NA), UM(JP_NI), UM(JP_RA), UM(JP_SE), UM(JP_VOICE), UM(JP_SVOICE), KC_BSLS,     KC_DEL,  KC_END,  KC_PGDN,
        KC_CAPS,   UM(JP_CHI), UM(JP_TO), UM(JP_SI), UM(JP_HA), UM(JP_KI), UM(JP_KU), UM(JP_MA), UM(JP_NO), UM(JP_RI), UM(JP_RE), UM(JP_KE),                   KC_ENT,
        KC_LSFT,   UM(JP_TSU), UM(JP_SA), UM(JP_SO), UM(JP_HI), UM(JP_KO), UM(JP_MI), UM(JP_MO), UM(JP_NE), UM(JP_RU), UM(JP_ME),                              KC_RSFT,              KC_UP,
        KC_LCTL,   KC_LGUI,    KC_LALT,                         KC_SPC,                                     KC_RALT,   DF(EN),    KC_RCTL,                                  KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [SPECIAL] = LAYOUT_tkl_ansi(
        QK_BOOTLOADER, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        QK_MAKE,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
        KC_TRNS,                KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,                   KC_TRNS,
        KC_TRNS,       KC_TRNS, KC_TRNS,                            KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS  KC_TRNS, KC_TRNS, KC_TRNS
    ),
    // clang-format on
};
