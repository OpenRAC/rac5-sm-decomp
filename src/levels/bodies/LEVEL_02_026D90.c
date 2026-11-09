/* LEVEL_02:0x026D90 -- placement copy of FRONTEND_001410.c: one-time init gate; sets a flag once a status bit is seen. */
extern int D_00208BF4;
extern unsigned char D_00208BD9;
extern int D_00208BDC;
extern unsigned char D_00208B70;
extern int func_08E8B8(int a);

int func_026D90(void)
{
    int r;

    if (D_00208BF4 != 0) {
        return 0;
    }
    r = func_08E8B8(1);
    if (r & 8) {
        if (D_00208BD9 == 0) {
            D_00208BD9 = 1;
            D_00208BDC = 0xFF;
        }
    }
    if (D_00208BD9 == 0) {
        return 0;
    }
    if (D_00208BDC != 0) {
        return 0;
    }
    D_00208B70 = 1;
    return 1;
}
