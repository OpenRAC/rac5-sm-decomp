/* LEVEL_21:0x0F2960 -- placement copy of FRONTEND_021438.c: advances the current record from state 1 to 2 when the id matches. */
extern int D_0015B9C8;
extern int *D_0015B9C4;
int func_0F2960(int value)
{
    int *p;
    int s;
    if (D_0015B9C8 == 0) return 0;
    if (value != D_0015B9C8) return 0;
    p = D_0015B9C4;
    s = p[1];
    if ((s ^ 1) == 0) {
        if (s != 2) {
            p[1] = 2;
            return 1;
        }
    }
    return 0;
}
