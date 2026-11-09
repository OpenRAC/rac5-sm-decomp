/* LEVEL_02:0x1F0560 -- placement copy of LEVEL_01_1DB8C8.c: lazily loads a set of resource handles. */
extern int func_0E3A10(int a, int b, int c, int d);
extern int func_0E4058(int a, int b, int c, int d);

extern int D_0021E5A4;
extern int D_0021E5A8;
extern int D_0021E5AC;
extern int D_0021E5B0;
extern int D_0021E5B4;
extern int D_0021E5B8;

void func_1F0560(void)
{
    if (D_0021E5A4 == -1) {
        D_0021E5A4 = func_0E3A10(1, 0x8C, 3, 1);
        D_0021E5A8 = func_0E3A10(0, 1, 1, 1);
        D_0021E5AC = func_0E3A10(1, 0x8D, 3, 1);
        D_0021E5B0 = func_0E3A10(0, 0x8D, 1, 1);
        D_0021E5B8 = func_0E3A10(0, 0x30, 1, 1);
        D_0021E5B4 = func_0E4058(0, 0xA, 1, 1);
    }
}
