/* LEVEL_23:0x125210 -- placement copy of FRONTEND_021438.c: advances the current record from state 1 to 2 when the id matches. */
extern int D_001DA468;
extern int *D_001DA464;
int func_125210(int value)
{
    int *p;
    int s;
    if (D_001DA468 == 0) return 0;
    if (value != D_001DA468) return 0;
    p = D_001DA464;
    s = p[1];
    if ((s ^ 1) == 0) {
        if (s != 2) {
            p[1] = 2;
            return 1;
        }
    }
    return 0;
}
