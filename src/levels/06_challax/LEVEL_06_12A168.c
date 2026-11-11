/* LEVEL_06:0x12A168 -- placement copy of FRONTEND_021438.c: advances the current record from state 1 to 2 when the id matches. */
extern int D_001F5C68;
extern int *D_001F5C64;
int func_12A168(int value)
{
    int *p;
    int s;
    if (D_001F5C68 == 0) return 0;
    if (value != D_001F5C68) return 0;
    p = D_001F5C64;
    s = p[1];
    if ((s ^ 1) == 0) {
        if (s != 2) {
            p[1] = 2;
            return 1;
        }
    }
    return 0;
}
