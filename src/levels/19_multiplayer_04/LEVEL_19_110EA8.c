/* LEVEL_19:0x110EA8 -- placement copy of FRONTEND_021438.c: advances the current record from state 1 to 2 when the id matches. */
extern int D_001B5CF8;
extern int *D_001B5CF4;
int func_110EA8(int value)
{
    int *p;
    int s;
    if (D_001B5CF8 == 0) return 0;
    if (value != D_001B5CF8) return 0;
    p = D_001B5CF4;
    s = p[1];
    if ((s ^ 1) == 0) {
        if (s != 2) {
            p[1] = 2;
            return 1;
        }
    }
    return 0;
}
