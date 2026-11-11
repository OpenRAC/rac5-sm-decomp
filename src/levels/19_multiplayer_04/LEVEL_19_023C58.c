/* LEVEL_19:0x023C58 -- placement copy of FRONTEND_001410.c: one-time init gate; sets a flag once a status bit is seen. */
extern int D_001A2BFC;
extern unsigned char D_001A2BE1;
extern int D_001A2BE4;
extern unsigned char D_001A2B78;
extern int func_0799B0(int a);

int func_023C58(void)
{
    int r;

    if (D_001A2BFC != 0) {
        return 0;
    }
    r = func_0799B0(1);
    if (r & 8) {
        if (D_001A2BE1 == 0) {
            D_001A2BE1 = 1;
            D_001A2BE4 = 0xFF;
        }
    }
    if (D_001A2BE1 == 0) {
        return 0;
    }
    if (D_001A2BE4 != 0) {
        return 0;
    }
    D_001A2B78 = 1;
    return 1;
}
