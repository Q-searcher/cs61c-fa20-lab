#include <stdio.h>
#include "bit_ops.h"

// Return the nth bit of x.
// Assume 0 <= n <= 31
unsigned get_bit(unsigned x,
                 unsigned n) {
    // YOUR CODE HERE
    // Returning -1 is a placeholder (it makes
    // no sense, because get_bit only returns 
    // 0 or 1)
    unsigned mask = 1 << n;       // 创建掩码，第 n 位为 1
    return (x & mask) >> n;       // 提取第 n 位并右移到最低位，返回 0 或 1
}
// Set the nth bit of the value of x to v.
// Assume 0 <= n <= 31, and v is 0 or 1
void set_bit(unsigned * x,
             unsigned n,
             unsigned v) {
    unsigned mask = 1 << n;
    unsigned clear_mask = ~mask;    // 除了第n位外，其余全部为1
    // 将第n位，置为零
    *x = clear_mask & *x;
    unsigned set_number = v << n;
    *x = *x + set_number;    
}
// Flip the nth bit of the value of x.
// Assume 0 <= n <= 31
void flip_bit(unsigned * x,
              unsigned n) {
    unsigned mask = 1 << n;
    *x = mask ^ *x;
    
}

