/* FRONTEND:0x021438 -- advances the current record from state 1 to 2 when the id matches. */
extern int D_00032830;
extern int *D_0003282C;
int func_021438(int value)
{
    int *p;
    int s;
    if (D_00032830 == 0) return 0;
    if (value != D_00032830) return 0;
    p = D_0003282C;
    s = p[1];
    if ((s ^ 1) == 0) {
        if (s != 2) {
            p[1] = 2;
            return 1;
        }
    }
    return 0;
}
