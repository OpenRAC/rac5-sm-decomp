/* LEVEL_09:0x1C4030 -- placement copy of LEVEL_01_1DB8C8.c: lazily loads a set of resource handles. */
extern int func_0DA330(int a, int b, int c, int d);
extern int func_0DA978(int a, int b, int c, int d);

extern int D_001F32D4;
extern int D_001F32D8;
extern int D_001F32DC;
extern int D_001F32E0;
extern int D_001F32E4;
extern int D_001F32E8;

void func_1C4030(void)
{
    if (D_001F32D4 == -1) {
        D_001F32D4 = func_0DA330(1, 0x8C, 3, 1);
        D_001F32D8 = func_0DA330(0, 1, 1, 1);
        D_001F32DC = func_0DA330(1, 0x8D, 3, 1);
        D_001F32E0 = func_0DA330(0, 0x8D, 1, 1);
        D_001F32E8 = func_0DA330(0, 0x30, 1, 1);
        D_001F32E4 = func_0DA978(0, 0xA, 1, 1);
    }
}
