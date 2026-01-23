#ifndef KEYMAP_JP_H
#define KEYMAP_JP_H

// アルファベットキー
#define JP_A A
#define JP_B B
#define JP_C C
#define JP_D D
#define JP_E E
#define JP_F F
#define JP_G G
#define JP_H H
#define JP_I I
#define JP_J J
#define JP_K K
#define JP_L L
#define JP_M M
#define JP_N N
#define JP_O O
#define JP_P P
#define JP_Q Q
#define JP_R R
#define JP_S S
#define JP_T T
#define JP_U U
#define JP_V V
#define JP_W W
#define JP_X X
#define JP_Y Y
#define JP_Z Z

// 数字キー
#define JP_1 N1
#define JP_2 N2
#define JP_3 N3
#define JP_4 N4
#define JP_5 N5
#define JP_6 N6
#define JP_7 N7
#define JP_8 N8
#define JP_9 N9
#define JP_0 N0

// 日本語特有のキー
#define JP_ZKHK GRAVE        // 半角/全角 漢字
#define JP_YEN   INT3        // ¥
#define JP_MHEN  INT5        // 無変換
#define JP_HENK  INT4        // 変換
#define JP_KANA  INT2        // ひらがな/カタカナ/ローマ字
#define JP_EISU  CAPS        // 英数
#define JP_CAPS  LS(JP_EISU) // Caps Lock

// 記号キー
#define JP_MINUS  MINUS      // -
#define JP_CARET  EQUAL      // ^
#define JP_AT     LBKT       // @
#define JP_LBKT   RBKT       // [
#define JP_SEMI   SEMI       // ;
#define JP_COLON  SQT        // :
#define JP_RBKT   NUHS       // ]
#define JP_COMMA  COMMA      // ,
#define JP_DOT    DOT        // .
#define JP_SLASH  SLASH      // /
#define JP_BSLH   INT1       // (Backslash)
#define JP_EQUAL  LS(JP_MINUS) // =
#define JP_TILDE  LS(JP_CARET) // ~
#define JP_PIPE   LS(JP_YEN)   // |
#define JP_GRAVE  LS(JP_AT)    // ` (Backtick)
#define JP_LBRC   LS(JP_LBKT)  // {
#define JP_PLUS   LS(JP_SEMI)  // +
#define JP_ASTRK  LS(JP_COLON) // *
#define JP_RBRC   LS(JP_RBKT)  // }
#define JP_LT     LS(JP_COMMA) // <
#define JP_GT     LS(JP_DOT)   // >
#define JP_QMARK  LS(JP_SLASH) // ?
#define JP_UNDER  LS(JP_BSLH)  // _

// 特殊キー
#define JP_EXCL   LS(JP_1)   // !
#define JP_DQT    LS(JP_2)   // "
#define JP_HASH   LS(JP_3)   // #
#define JP_DLLR   LS(JP_4)   // $
#define JP_PRCNT  LS(JP_5)   // %
#define JP_AMPS   LS(JP_6)   // &
#define JP_SQT    LS(JP_7)   // '
#define JP_LPAR   LS(JP_8)   // (
#define JP_RPAR   LS(JP_9)   // )

#endif // KEYMAP_JP_H
