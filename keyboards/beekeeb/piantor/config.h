// Copyright 2022 beekeeb
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1

// When USB_VBUS_PIN is not defined, SPLIT_USB_DETECT is used.
#define USB_VBUS_PIN GP29 // for WeAct

// Setting for the TT keycode
#define TAPPING_TOGGLE 2

// Time in millis to trigger mod (default 200)
// https://docs.qmk.fm/#/tap_hold?id=tapping-term
#define TAPPING_TERM 200

// Time in millis between taps to not trigger mod (default TAPPING_TERM)
// https://docs.qmk.fm/#/tap_hold?id=quick-tap-term
#define QUICK_TAP_TERM 120

// https://docs.qmk.fm/#/tap_hold?id=permissive-hold
/* #define PERMISSIVE_HOLD */
