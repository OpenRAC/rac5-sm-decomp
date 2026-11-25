/* LEVEL_15:0x0230E8 -- placement copy of LEVEL_01_029910.c: takes the pending handles out of the two request tables, clears them, and closes each one. */
extern int func_022E20(void);
extern int ps2fioClose(int);
extern int D_00179118[];
extern int D_00179318[];
extern unsigned int D_00148FB4;
extern unsigned int D_00148FB8;

void func_0230E8(void)
{
    int handles[128];
    unsigned int n;
    unsigned int i;
    unsigned int j;

    ((int (*)(int))func_022E20)(1);
    n = D_00148FB4;
    for (i = 0; i != n; i++) {
        handles[i] = D_00179118[i];
        D_00179118[i] = -1;
    }
    D_00148FB4 = 0;
    for (j = 0; j != n; j++) {
        ps2fioClose(handles[j]);
    }
    n = D_00148FB8;
    for (i = 0; i != n; i++) {
        handles[i] = D_00179318[i];
        D_00179318[i] = -1;
    }
    D_00148FB8 = 0;
    for (j = 0; j != n; j++) {
        ps2fioClose(handles[j]);
    }
}
