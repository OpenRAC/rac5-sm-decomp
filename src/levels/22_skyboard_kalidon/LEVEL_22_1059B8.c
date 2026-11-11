/* LEVEL_22:0x1059B8 -- stores its int argument and returns 1 when a status call and a four-step probe both succeed. */

extern int func_105800(int a, int *p);
extern int func_105EC0(int i, int v);

int func_1059B8(int a)
{
    int local;
    int i;

    local = a;
    if (func_105800(0, &local) == 0) {
        return 0;
    }
    for (i = 0; i < 4; i++) {
        if (func_105EC0(i, local) == 0) {
            return 0;
        }
    }
    return 1;
}
