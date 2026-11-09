/* LEVEL_16:0x18E0B0 -- placement copy of LEVEL_01_1DB8C8.c: lazily loads a set of resource handles. */
extern int func_0CC6C0(int a, int b, int c, int d);
extern int func_0CCD08(int a, int b, int c, int d);

extern int D_001BE6B4;
extern int D_001BE6B8;
extern int D_001BE6BC;
extern int D_001BE6C0;
extern int D_001BE6C4;
extern int D_001BE6C8;

void func_18E0B0(void)
{
    if (D_001BE6B4 == -1) {
        D_001BE6B4 = func_0CC6C0(1, 0x8C, 3, 1);
        D_001BE6B8 = func_0CC6C0(0, 1, 1, 1);
        D_001BE6BC = func_0CC6C0(1, 0x8D, 3, 1);
        D_001BE6C0 = func_0CC6C0(0, 0x8D, 1, 1);
        D_001BE6C8 = func_0CC6C0(0, 0x30, 1, 1);
        D_001BE6C4 = func_0CCD08(0, 0xA, 1, 1);
    }
}
