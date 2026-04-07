#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"
#include "bit_ops.h"

void lfsr_calculate(uint16_t *reg) {
    unsigned bit0 = get_bit(*reg, 0);
    unsigned bit2 = get_bit(*reg, 2);
    unsigned bit3 = get_bit(*reg, 3);
    unsigned bit5 = get_bit(*reg, 5);

    unsigned bit15 = bit0 ^ bit2 ^ bit3 ^bit5;

    *reg = (*reg >> 1) + (bit15 << 15);
}

