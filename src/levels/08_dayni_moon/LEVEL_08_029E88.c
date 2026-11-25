/* LEVEL_08:0x029E88 -- placement copy of LEVEL_01_029910.c: takes the pending handles out of the two request tables, clears them, and closes each one. */
extern int func_029BC0(void);
extern int ps2fioClose(int);
extern int D_00280218[];
extern int D_00280418[];
extern unsigned int D_0023CEB4;
extern unsigned int D_0023CEB8;

void func_029E88(void)
{
    int handles[128];
    unsigned int n;
    unsigned int i;
    unsigned int j;

    ((int (*)(int))func_029BC0)(1);
    n = D_0023CEB4;
    for (i = 0; i != n; i++) {
        handles[i] = D_00280218[i];
        D_00280218[i] = -1;
    }
    D_0023CEB4 = 0;
    for (j = 0; j != n; j++) {
        ps2fioClose(handles[j]);
    }
    n = D_0023CEB8;
    for (i = 0; i != n; i++) {
        handles[i] = D_00280418[i];
        D_00280418[i] = -1;
    }
    D_0023CEB8 = 0;
    for (j = 0; j != n; j++) {
        ps2fioClose(handles[j]);
    }
}
