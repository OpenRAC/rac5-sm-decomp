/* LEVEL_10:0x025D98 -- placement copy of FRONTEND_001410.c: one-time init gate; sets a flag once a status bit is seen. */
extern int D_001FCF74;
extern unsigned char D_001FCF59;
extern int D_001FCF5C;
extern unsigned char D_001FCEF0;
extern int func_0882F0(int a);

int func_025D98(void)
{
    int r;

    if (D_001FCF74 != 0) {
        return 0;
    }
    r = func_0882F0(1);
    if (r & 8) {
        if (D_001FCF59 == 0) {
            D_001FCF59 = 1;
            D_001FCF5C = 0xFF;
        }
    }
    if (D_001FCF59 == 0) {
        return 0;
    }
    if (D_001FCF5C != 0) {
        return 0;
    }
    D_001FCEF0 = 1;
    return 1;
}
