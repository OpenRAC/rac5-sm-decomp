/* LEVEL_08:0x026D38 -- placement copy of FRONTEND_001410.c: one-time init gate; sets a flag once a status bit is seen. */
extern int D_0023CAF4;
extern unsigned char D_0023CAD9;
extern int D_0023CADC;
extern unsigned char D_0023CA70;
extern int func_08FFD8(int a);

int func_026D38(void)
{
    int r;

    if (D_0023CAF4 != 0) {
        return 0;
    }
    r = func_08FFD8(1);
    if (r & 8) {
        if (D_0023CAD9 == 0) {
            D_0023CAD9 = 1;
            D_0023CADC = 0xFF;
        }
    }
    if (D_0023CAD9 == 0) {
        return 0;
    }
    if (D_0023CADC != 0) {
        return 0;
    }
    D_0023CA70 = 1;
    return 1;
}
