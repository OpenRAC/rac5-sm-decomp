/* LEVEL_18:0x11D8D8 -- placement copy of LEVEL_16_11E820.c: refreshes three status bytes from input words (the inverted top bit, then two nonzero tests) and sets a mode word to 4 when func_11E508 reports a nonzero result, else 0. */
extern unsigned int D_001BD008;
extern int D_001BD00C;
extern int D_001BD010;
extern unsigned char D_001BBB64;
extern unsigned char D_001BBC4C;
extern unsigned char D_001BBD34;
extern int D_002E19B8;

extern int func_11E548(void);
extern int func_11E508(void);

void func_11D8D8(void)
{
    func_11E548();
    D_001BBC4C = ~D_001BD008 >> 31;
    D_001BBB64 = D_001BD010 != 0;
    D_001BBD34 = D_001BD00C != 0;
    if (func_11E508() == 0)
        D_002E19B8 = 0;
    else
        D_002E19B8 = 4;
}
