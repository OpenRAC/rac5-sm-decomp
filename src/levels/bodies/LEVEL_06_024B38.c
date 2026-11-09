/* LEVEL_06:0x024B38 -- placement copy of FRONTEND_001410.c: one-time init gate; sets a flag once a status bit is seen. */
extern int D_001E2E74;
extern unsigned char D_001E2E59;
extern int D_001E2E5C;
extern unsigned char D_001E2DF0;
extern int func_080E00(int a);

int func_024B38(void)
{
    int r;

    if (D_001E2E74 != 0) {
        return 0;
    }
    r = func_080E00(1);
    if (r & 8) {
        if (D_001E2E59 == 0) {
            D_001E2E59 = 1;
            D_001E2E5C = 0xFF;
        }
    }
    if (D_001E2E59 == 0) {
        return 0;
    }
    if (D_001E2E5C != 0) {
        return 0;
    }
    D_001E2DF0 = 1;
    return 1;
}
