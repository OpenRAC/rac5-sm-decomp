/* LEVEL_07:0x136A98 -- placement copy of FRONTEND_021438.c: advances the current record from state 1 to 2 when the id matches. */
extern int D_0021B368;
extern int *D_0021B364;
int func_136A98(int value)
{
    int *p;
    int s;
    if (D_0021B368 == 0) return 0;
    if (value != D_0021B368) return 0;
    p = D_0021B364;
    s = p[1];
    if ((s ^ 1) == 0) {
        if (s != 2) {
            p[1] = 2;
            return 1;
        }
    }
    return 0;
}
