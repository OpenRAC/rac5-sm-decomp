/* LEVEL_22:0x10AF68 -- placement copy of FRONTEND_021438.c: advances the current record from state 1 to 2 when the id matches. */
extern int D_00166048;
extern int *D_00166044;
int func_10AF68(int value)
{
    int *p;
    int s;
    if (D_00166048 == 0) return 0;
    if (value != D_00166048) return 0;
    p = D_00166044;
    s = p[1];
    if ((s ^ 1) == 0) {
        if (s != 2) {
            p[1] = 2;
            return 1;
        }
    }
    return 0;
}
