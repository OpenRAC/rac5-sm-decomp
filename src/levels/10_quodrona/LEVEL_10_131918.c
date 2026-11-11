/* LEVEL_10:0x131918 -- placement copy of FRONTEND_021438.c: advances the current record from state 1 to 2 when the id matches. */
extern int D_0020FCC8;
extern int *D_0020FCC4;
int func_131918(int value)
{
    int *p;
    int s;
    if (D_0020FCC8 == 0) return 0;
    if (value != D_0020FCC8) return 0;
    p = D_0020FCC4;
    s = p[1];
    if ((s ^ 1) == 0) {
        if (s != 2) {
            p[1] = 2;
            return 1;
        }
    }
    return 0;
}
