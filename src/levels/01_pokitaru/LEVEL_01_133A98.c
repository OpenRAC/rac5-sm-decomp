/* LEVEL_01:0x133A98 -- placement copy of FRONTEND_021438.c: advances the current record from state 1 to 2 when the id matches. */
extern int D_00207068;
extern int *D_00207064;
int func_133A98(int value)
{
    int *p;
    int s;
    if (D_00207068 == 0) return 0;
    if (value != D_00207068) return 0;
    p = D_00207064;
    s = p[1];
    if ((s ^ 1) == 0) {
        if (s != 2) {
            p[1] = 2;
            return 1;
        }
    }
    return 0;
}
