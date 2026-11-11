/* FRONTEND:0x001410 -- one-time init gate; sets a flag once a status bit is seen. */
extern int D_00027E04;
extern unsigned char D_00027DE9;
extern int D_00027DEC;
extern unsigned char D_00027D80;
extern int func_005650(int a);

int func_001410(void)
{
    int r;

    if (D_00027E04 != 0) {
        return 0;
    }
    r = func_005650(1);
    if (r & 8) {
        if (D_00027DE9 == 0) {
            D_00027DE9 = 1;
            D_00027DEC = 0xFF;
        }
    }
    if (D_00027DE9 == 0) {
        return 0;
    }
    if (D_00027DEC != 0) {
        return 0;
    }
    D_00027D80 = 1;
    return 1;
}
