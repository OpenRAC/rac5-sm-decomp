/* LEVEL_03:0x026388 -- placement copy of FRONTEND_001410.c: one-time init gate; sets a flag once a status bit is seen. */
extern int D_0020C5F4;
extern unsigned char D_0020C5D9;
extern int D_0020C5DC;
extern unsigned char D_0020C570;
extern int func_087DE0(int a);

int func_026388(void)
{
    int r;

    if (D_0020C5F4 != 0) {
        return 0;
    }
    r = func_087DE0(1);
    if (r & 8) {
        if (D_0020C5D9 == 0) {
            D_0020C5D9 = 1;
            D_0020C5DC = 0xFF;
        }
    }
    if (D_0020C5D9 == 0) {
        return 0;
    }
    if (D_0020C5DC != 0) {
        return 0;
    }
    D_0020C570 = 1;
    return 1;
}
