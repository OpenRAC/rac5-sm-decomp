/* LEVEL_07:0x026A80 -- placement copy of FRONTEND_001410.c: one-time init gate; sets a flag once a status bit is seen. */
extern int D_00208274;
extern unsigned char D_00208259;
extern int D_0020825C;
extern unsigned char D_002081F0;
extern int func_08A058(int a);

int func_026A80(void)
{
    int r;

    if (D_00208274 != 0) {
        return 0;
    }
    r = func_08A058(1);
    if (r & 8) {
        if (D_00208259 == 0) {
            D_00208259 = 1;
            D_0020825C = 0xFF;
        }
    }
    if (D_00208259 == 0) {
        return 0;
    }
    if (D_0020825C != 0) {
        return 0;
    }
    D_002081F0 = 1;
    return 1;
}
