#include "shared-bindings/board/__init__.h"

STATIC const mp_rom_map_elem_t board_global_dict_table[] = {
    // Pins for internal use.
    { MP_ROM_QSTR(MP_QSTR__R1),  MP_ROM_PTR(&pin_PA08) },
    { MP_ROM_QSTR(MP_QSTR__R2),  MP_ROM_PTR(&pin_PA09) },
    { MP_ROM_QSTR(MP_QSTR__R3),  MP_ROM_PTR(&pin_PA10) },
    { MP_ROM_QSTR(MP_QSTR__R4),  MP_ROM_PTR(&pin_PA11) },
    { MP_ROM_QSTR(MP_QSTR__R5),  MP_ROM_PTR(&pin_PA14) },
    { MP_ROM_QSTR(MP_QSTR__R6),  MP_ROM_PTR(&pin_PA15) },
    { MP_ROM_QSTR(MP_QSTR__R7),  MP_ROM_PTR(&pin_PA16) },
    { MP_ROM_QSTR(MP_QSTR__R8),  MP_ROM_PTR(&pin_PA17) },

    { MP_ROM_QSTR(MP_QSTR__C8),  MP_ROM_PTR(&pin_PA18) },
    { MP_ROM_QSTR(MP_QSTR__C7),  MP_ROM_PTR(&pin_PA19) },
    { MP_ROM_QSTR(MP_QSTR__C6),  MP_ROM_PTR(&pin_PA22) },
    { MP_ROM_QSTR(MP_QSTR__C5),  MP_ROM_PTR(&pin_PA23) },
    { MP_ROM_QSTR(MP_QSTR__C4),  MP_ROM_PTR(&pin_PA01) },
    { MP_ROM_QSTR(MP_QSTR__C3),  MP_ROM_PTR(&pin_PA00) },
    { MP_ROM_QSTR(MP_QSTR__C2),  MP_ROM_PTR(&pin_PA30) },
    { MP_ROM_QSTR(MP_QSTR__C1),  MP_ROM_PTR(&pin_PA31) },

    // Button pins.
    { MP_ROM_QSTR(MP_QSTR__X),  MP_ROM_PTR(&pin_PA02) },
    { MP_ROM_QSTR(MP_QSTR__U),  MP_ROM_PTR(&pin_PA03) },
    { MP_ROM_QSTR(MP_QSTR__L),  MP_ROM_PTR(&pin_PA04) },
    { MP_ROM_QSTR(MP_QSTR__D),  MP_ROM_PTR(&pin_PA05) },
    { MP_ROM_QSTR(MP_QSTR__R),  MP_ROM_PTR(&pin_PA06) },
    { MP_ROM_QSTR(MP_QSTR__O),  MP_ROM_PTR(&pin_PA07) },

    { MP_ROM_QSTR(MP_QSTR__UNUSED),  MP_ROM_PTR(&pin_PA27) },
};
MP_DEFINE_CONST_DICT(board_module_globals, board_global_dict_table);
