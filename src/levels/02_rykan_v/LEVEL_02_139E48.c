/* LEVEL_02:0x139E48 -- placement copy of FRONTEND_021438.c: advances the current record from state 1 to 2 when the id matches. */
extern int D_0021C028;
extern int *D_0021C024;
int func_139E48(int value)
{
    int *p;
    int s;
    if (D_0021C028 == 0) return 0;
    if (value != D_0021C028) return 0;
    p = D_0021C024;
    s = p[1];
    if ((s ^ 1) == 0) {
        if (s != 2) {
            p[1] = 2;
            return 1;
        }
    }
    return 0;
}
