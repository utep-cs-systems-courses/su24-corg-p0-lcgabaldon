#include "draw.h"		/* for font */
#include "stdio.h"		/* for putchar */

//replacing 5x7 with 8x12

void print_char_8x12(char c)
{
  c -= 0x20;
  for (unsigned char col = 0; col < 8; col++) {
    unsigned char rowBits = font_8x12[(unsigned char)c][col];
    for (unsigned char row = 0; row < 12; row++) {
      unsigned char colMask = 1 << (11 - row); /* mask to select bit associated with bit */
      putchar((rowBits & colMask) ? '*' : ' ');
    }
    putchar('\n');
  }
  putchar('\n');
}