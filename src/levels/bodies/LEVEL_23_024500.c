/* LEVEL_23:0x024500 -- placement copy of FRONTEND_001410.c: one-time init gate; sets a flag once a status bit is seen. */
extern int D_001C7374;
extern unsigned char D_001C7359;
extern int D_001C735C;
extern unsigned char D_001C72F0;
extern int func_07DE48(int a);

int func_024500(void)
{
    int r;

    if (D_001C7374 != 0) {
        return 0;
    }
    r = func_07DE48(1);
    if (r & 8) {
        if (D_001C7359 == 0) {
            D_001C7359 = 1;
            D_001C735C = 0xFF;
        }
    }
    if (D_001C7359 == 0) {
        return 0;
    }
    if (D_001C735C != 0) {
        return 0;
    }
    D_001C72F0 = 1;
    return 1;
}
