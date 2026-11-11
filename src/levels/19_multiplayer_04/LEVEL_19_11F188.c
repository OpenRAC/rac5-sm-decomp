/* LEVEL_19:0x11F188 -- placement copy of LEVEL_16_11E820.c: refreshes three status bytes from input words (the inverted top bit, then two nonzero tests) and sets a mode word to 4 when func_11FDB8 reports a nonzero result, else 0. */
extern unsigned int D_001BCD00;
extern int D_001BCD04;
extern int D_001BCD08;
extern unsigned char D_001BB85C;
extern unsigned char D_001BB944;
extern unsigned char D_001BBA2C;
extern int D_002E17B8;

extern int func_11FDF8(void);
extern int func_11FDB8(void);

void func_11F188(void)
{
    func_11FDF8();
    D_001BB944 = ~D_001BCD00 >> 31;
    D_001BB85C = D_001BCD08 != 0;
    D_001BBA2C = D_001BCD04 != 0;
    if (func_11FDB8() == 0)
        D_002E17B8 = 0;
    else
        D_002E17B8 = 4;
}
