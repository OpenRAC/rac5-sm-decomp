/* LEVEL_07:0x029C50 -- placement copy of LEVEL_01_029910.c: takes the pending handles out of the two request tables, clears them, and closes each one. */
extern int func_029988(void);
extern int ps2fioClose(int);
extern int D_00246898[];
extern int D_00246A98[];
extern unsigned int D_00208634;
extern unsigned int D_00208638;

void func_029C50(void)
{
    int handles[128];
    unsigned int n;
    unsigned int i;
    unsigned int j;

    ((int (*)(int))func_029988)(1);
    n = D_00208634;
    for (i = 0; i != n; i++) {
        handles[i] = D_00246898[i];
        D_00246898[i] = -1;
    }
    D_00208634 = 0;
    for (j = 0; j != n; j++) {
        ps2fioClose(handles[j]);
    }
    n = D_00208638;
    for (i = 0; i != n; i++) {
        handles[i] = D_00246A98[i];
        D_00246A98[i] = -1;
    }
    D_00208638 = 0;
    for (j = 0; j != n; j++) {
        ps2fioClose(handles[j]);
    }
}
