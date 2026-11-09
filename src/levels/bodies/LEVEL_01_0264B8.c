/* LEVEL_01:0x0264B8 -- placement copy of FRONTEND_001410.c: one-time init gate; sets a flag once a status bit is seen. */
extern int D_001F3F74;
extern unsigned char D_001F3F59;
extern int D_001F3F5C;
extern unsigned char D_001F3EF0;
extern int func_087F88(int a);

int func_0264B8(void)
{
    int r;

    if (D_001F3F74 != 0) {
        return 0;
    }
    r = func_087F88(1);
    if (r & 8) {
        if (D_001F3F59 == 0) {
            D_001F3F59 = 1;
            D_001F3F5C = 0xFF;
        }
    }
    if (D_001F3F59 == 0) {
        return 0;
    }
    if (D_001F3F5C != 0) {
        return 0;
    }
    D_001F3EF0 = 1;
    return 1;
}
