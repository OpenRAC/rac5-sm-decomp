/* LEVEL_03:0x0273B0 -- placement copy of LEVEL_01_0274D0.c: replaces one bit-field of a table byte. */
extern unsigned char *D_0020C62C;
void func_0273B0(int index, unsigned char value, unsigned char bit){ int mask = 1 << bit; unsigned char *p; unsigned char *q; p = D_0020C62C + 0x8c0; p = p + index; *p &= ~mask; q = D_0020C62C + 0x8c0; q = q + index; *q |= (value << bit) & mask; }
