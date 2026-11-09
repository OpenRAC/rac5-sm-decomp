/* LEVEL_16:0x024018 -- placement copy of FRONTEND_001410.c: one-time init gate; sets a flag once a status bit is seen. */
extern int D_001A1A7C;
extern unsigned char D_001A1A61;
extern int D_001A1A64;
extern unsigned char D_001A19F8;
extern int func_0794C8(int a);

int func_024018(void)
{
    int r;

    if (D_001A1A7C != 0) {
        return 0;
    }
    r = func_0794C8(1);
    if (r & 8) {
        if (D_001A1A61 == 0) {
            D_001A1A61 = 1;
            D_001A1A64 = 0xFF;
        }
    }
    if (D_001A1A61 == 0) {
        return 0;
    }
    if (D_001A1A64 != 0) {
        return 0;
    }
    D_001A19F8 = 1;
    return 1;
}
