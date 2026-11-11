/* LEVEL_05:0x0253C8 -- placement copy of FRONTEND_001410.c: one-time init gate; sets a flag once a status bit is seen. */
extern int D_001E32F4;
extern unsigned char D_001E32D9;
extern int D_001E32DC;
extern unsigned char D_001E3270;
extern int func_0858E0(int a);

int func_0253C8(void)
{
    int r;

    if (D_001E32F4 != 0) {
        return 0;
    }
    r = func_0858E0(1);
    if (r & 8) {
        if (D_001E32D9 == 0) {
            D_001E32D9 = 1;
            D_001E32DC = 0xFF;
        }
    }
    if (D_001E32D9 == 0) {
        return 0;
    }
    if (D_001E32DC != 0) {
        return 0;
    }
    D_001E3270 = 1;
    return 1;
}
