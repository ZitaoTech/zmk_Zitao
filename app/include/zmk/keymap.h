#pragma once

bool zmk_keymap_layer_active(u8_t layer);
int zmk_keymap_layer_activate(u8_t layer);
int zmk_keymap_layer_deactivate(u8_t layer);
int zmk_keymap_layer_toggle(u8_t layer);

int zmk_keymap_layer_set_default(u8_t layer);

int zmk_keymap_set_layer_state(u32_t layer_state);
u32_t zmk_keymap_get_layer_state();

int zmk_keymap_position_state_changed(u32_t position, bool pressed);
