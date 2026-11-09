/* LEVEL_20:0x0E35F0 -- placement copy of FRONTEND_021438.c: advances the current record from state 1 to 2 when the id matches. */
extern int D_00117238;
extern int *D_00117234;
int func_0E35F0(int value)
{
    int *p;
    int s;
    if (D_00117238 == 0) return 0;
    if (value != D_00117238) return 0;
    p = D_00117234;
    s = p[1];
    if ((s ^ 1) == 0) {
        if (s != 2) {
            p[1] = 2;
            return 1;
        }
    }
    return 0;
}
