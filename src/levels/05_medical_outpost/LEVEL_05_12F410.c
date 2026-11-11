/* LEVEL_05:0x12F410 -- placement copy of FRONTEND_021438.c: advances the current record from state 1 to 2 when the id matches. */
extern int D_001F60E8;
extern int *D_001F60E4;
int func_12F410(int value)
{
    int *p;
    int s;
    if (D_001F60E8 == 0) return 0;
    if (value != D_001F60E8) return 0;
    p = D_001F60E4;
    s = p[1];
    if ((s ^ 1) == 0) {
        if (s != 2) {
            p[1] = 2;
            return 1;
        }
    }
    return 0;
}
