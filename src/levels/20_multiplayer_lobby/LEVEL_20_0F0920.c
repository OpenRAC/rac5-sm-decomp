/* LEVEL_20:0x0F0920 -- placement copy of LEVEL_16_11E820.c: refreshes three status bytes from input words (the inverted top bit, then two nonzero tests) and sets a mode word to 4 when func_0F1550 reports a nonzero result, else 0. */
extern unsigned int D_0011E228;
extern int D_0011E22C;
extern int D_0011E230;
extern unsigned char D_0011CD84;
extern unsigned char D_0011CE6C;
extern unsigned char D_0011CF54;
extern int D_00204B90;

extern int func_0F1590(void);
extern int func_0F1550(void);

void func_0F0920(void)
{
    func_0F1590();
    D_0011CE6C = ~D_0011E228 >> 31;
    D_0011CD84 = D_0011E230 != 0;
    D_0011CF54 = D_0011E22C != 0;
    if (func_0F1550() == 0)
        D_00204B90 = 0;
    else
        D_00204B90 = 4;
}
