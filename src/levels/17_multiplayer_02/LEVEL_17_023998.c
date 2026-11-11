/* LEVEL_17:0x023998 -- placement copy of FRONTEND_001410.c: one-time init gate; sets a flag once a status bit is seen. */
extern int D_0019507C;
extern unsigned char D_00195061;
extern int D_00195064;
extern unsigned char D_00194FF8;
extern int func_079F40(int a);

int func_023998(void)
{
    int r;

    if (D_0019507C != 0) {
        return 0;
    }
    r = func_079F40(1);
    if (r & 8) {
        if (D_00195061 == 0) {
            D_00195061 = 1;
            D_00195064 = 0xFF;
        }
    }
    if (D_00195061 == 0) {
        return 0;
    }
    if (D_00195064 != 0) {
        return 0;
    }
    D_00194FF8 = 1;
    return 1;
}
