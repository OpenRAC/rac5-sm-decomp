/* LEVEL_09:0x028778 -- placement copy of LEVEL_01_029910.c: takes the pending handles out of the two request tables, clears them, and closes each one. */
extern int func_0284B0(void);
extern int ps2fioClose(int);
extern int D_00218718[];
extern int D_00218918[];
extern unsigned int D_001DE134;
extern unsigned int D_001DE138;

void func_028778(void)
{
    int handles[128];
    unsigned int n;
    unsigned int i;
    unsigned int j;

    ((int (*)(int))func_0284B0)(1);
    n = D_001DE134;
    for (i = 0; i != n; i++) {
        handles[i] = D_00218718[i];
        D_00218718[i] = -1;
    }
    D_001DE134 = 0;
    for (j = 0; j != n; j++) {
        ps2fioClose(handles[j]);
    }
    n = D_001DE138;
    for (i = 0; i != n; i++) {
        handles[i] = D_00218918[i];
        D_00218918[i] = -1;
    }
    D_001DE138 = 0;
    for (j = 0; j != n; j++) {
        ps2fioClose(handles[j]);
    }
}
