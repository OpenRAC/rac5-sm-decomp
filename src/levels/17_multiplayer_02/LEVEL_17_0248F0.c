/* LEVEL_17:0x0248F0 -- placement copy of LEVEL_01_0274D0.c: replaces one bit-field of a table byte. */
extern unsigned char *D_001950B4;
void func_0248F0(int index, unsigned char value, unsigned char bit){ int mask = 1 << bit; unsigned char *p; unsigned char *q; p = D_001950B4 + 0x8c0; p = p + index; *p &= ~mask; q = D_001950B4 + 0x8c0; q = q + index; *q |= (value << bit) & mask; }
