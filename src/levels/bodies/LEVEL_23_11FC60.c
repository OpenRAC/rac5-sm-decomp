/* LEVEL_23:0x11FC60 -- placement copy of LEVEL_22_1059B8.c: stores its int argument and returns 1 when a status call and a four-step probe both succeed. */

extern int func_11FA88(int a, int *p);
extern int func_120168(int i, int v);

int func_11FC60(int a)
{
    int local;
    int i;

    local = a;
    if (func_11FA88(0, &local) == 0) {
        return 0;
    }
    for (i = 0; i < 4; i++) {
        if (func_120168(i, local) == 0) {
            return 0;
        }
    }
    return 1;
}
