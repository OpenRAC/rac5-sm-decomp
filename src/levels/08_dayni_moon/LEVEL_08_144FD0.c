/* LEVEL_08:0x144FD0 -- placement copy of FRONTEND_021438.c: advances the current record from state 1 to 2 when the id matches. */
extern int D_0024FF28;
extern int *D_0024FF24;
int func_144FD0(int value)
{
    int *p;
    int s;
    if (D_0024FF28 == 0) return 0;
    if (value != D_0024FF28) return 0;
    p = D_0024FF24;
    s = p[1];
    if ((s ^ 1) == 0) {
        if (s != 2) {
            p[1] = 2;
            return 1;
        }
    }
    return 0;
}
