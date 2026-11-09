/* LEVEL_02:0x027CB8 -- placement copy of LEVEL_01_0274D0.c: replaces one bit-field of a table byte. */
extern unsigned char *D_00208C2C;
void func_027CB8(int index, unsigned char value, unsigned char bit){ int mask = 1 << bit; unsigned char *p; unsigned char *q; p = D_00208C2C + 0x8c0; p = p + index; *p &= ~mask; q = D_00208C2C + 0x8c0; q = q + index; *q |= (value << bit) & mask; }
