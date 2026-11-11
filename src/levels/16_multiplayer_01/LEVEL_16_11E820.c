/* LEVEL_16:0x11E820 -- refreshes three status bytes from input words (the inverted top bit, then two nonzero tests) and sets a mode word to 4 when func_11F450 reports a nonzero result, else 0. */
extern unsigned int D_001BBB88;
extern int D_001BBB8C;
extern int D_001BBB90;
extern unsigned char D_001BA6E4;
extern unsigned char D_001BA7CC;
extern unsigned char D_001BA8B4;
extern int D_002E1638;

extern int func_11F490(void);
extern int func_11F450(void);

void func_11E820(void)
{
    func_11F490();
    D_001BA7CC = ~D_001BBB88 >> 31;
    D_001BA6E4 = D_001BBB90 != 0;
    D_001BA8B4 = D_001BBB8C != 0;
    if (func_11F450() == 0)
        D_002E1638 = 0;
    else
        D_002E1638 = 4;
}
