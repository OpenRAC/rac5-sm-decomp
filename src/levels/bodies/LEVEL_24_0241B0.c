/* LEVEL_24:0x0241B0 -- placement copy of FRONTEND_001410.c: one-time init gate; sets a flag once a status bit is seen. */
extern int D_001C4BF4;
extern unsigned char D_001C4BD9;
extern int D_001C4BDC;
extern unsigned char D_001C4B70;
extern int func_081228(int a);

int func_0241B0(void)
{
    int r;

    if (D_001C4BF4 != 0) {
        return 0;
    }
    r = func_081228(1);
    if (r & 8) {
        if (D_001C4BD9 == 0) {
            D_001C4BD9 = 1;
            D_001C4BDC = 0xFF;
        }
    }
    if (D_001C4BD9 == 0) {
        return 0;
    }
    if (D_001C4BDC != 0) {
        return 0;
    }
    D_001C4B70 = 1;
    return 1;
}
