/* LEVEL_18:0x023660 -- placement copy of FRONTEND_001410.c: one-time init gate; sets a flag once a status bit is seen. */
extern int D_001A2EFC;
extern unsigned char D_001A2EE1;
extern int D_001A2EE4;
extern unsigned char D_001A2E78;
extern int func_078E48(int a);

int func_023660(void)
{
    int r;

    if (D_001A2EFC != 0) {
        return 0;
    }
    r = func_078E48(1);
    if (r & 8) {
        if (D_001A2EE1 == 0) {
            D_001A2EE1 = 1;
            D_001A2EE4 = 0xFF;
        }
    }
    if (D_001A2EE1 == 0) {
        return 0;
    }
    if (D_001A2EE4 != 0) {
        return 0;
    }
    D_001A2E78 = 1;
    return 1;
}
