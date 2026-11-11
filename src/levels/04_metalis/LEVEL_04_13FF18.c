/* LEVEL_04:0x13FF18 -- placement copy of FRONTEND_021438.c: advances the current record from state 1 to 2 when the id matches. */
extern int D_00220488;
extern int *D_00220484;
int func_13FF18(int value)
{
    int *p;
    int s;
    if (D_00220488 == 0) return 0;
    if (value != D_00220488) return 0;
    p = D_00220484;
    s = p[1];
    if ((s ^ 1) == 0) {
        if (s != 2) {
            p[1] = 2;
            return 1;
        }
    }
    return 0;
}
