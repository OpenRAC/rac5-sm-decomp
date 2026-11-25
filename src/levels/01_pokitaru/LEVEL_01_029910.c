/* LEVEL_01:0x029910 -- takes the pending handles out of the two request tables, clears them, and closes each one. */
extern int func_029648(void);
extern int ps2fioClose(int);
extern int D_00230F98[];
extern int D_00231198[];
extern unsigned int D_001F4334;
extern unsigned int D_001F4338;

void func_029910(void)
{
    int handles[128];
    unsigned int n;
    unsigned int i;
    unsigned int j;

    ((int (*)(int))func_029648)(1);
    n = D_001F4334;
    for (i = 0; i != n; i++) {
        handles[i] = D_00230F98[i];
        D_00230F98[i] = -1;
    }
    D_001F4334 = 0;
    for (j = 0; j != n; j++) {
        ps2fioClose(handles[j]);
    }
    n = D_001F4338;
    for (i = 0; i != n; i++) {
        handles[i] = D_00231198[i];
        D_00231198[i] = -1;
    }
    D_001F4338 = 0;
    for (j = 0; j != n; j++) {
        ps2fioClose(handles[j]);
    }
}
