/* LEVEL_17:0x10FD80 -- placement copy of FRONTEND_021438.c: advances the current record from state 1 to 2 when the id matches. */
extern int D_001A8178;
extern int *D_001A8174;
int func_10FD80(int value)
{
    int *p;
    int s;
    if (D_001A8178 == 0) return 0;
    if (value != D_001A8178) return 0;
    p = D_001A8174;
    s = p[1];
    if ((s ^ 1) == 0) {
        if (s != 2) {
            p[1] = 2;
            return 1;
        }
    }
    return 0;
}
