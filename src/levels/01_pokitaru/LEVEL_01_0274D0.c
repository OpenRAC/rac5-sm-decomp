/* LEVEL_01:0x0274D0 -- replaces one bit-field of a table byte. */
extern unsigned char *D_001F3FAC;
void func_0274D0(int index, unsigned char value, unsigned char bit){ int mask = 1 << bit; unsigned char *p; unsigned char *q; p = D_001F3FAC + 0x8c0; p = p + index; *p &= ~mask; q = D_001F3FAC + 0x8c0; q = q + index; *q |= (value << bit) & mask; }
