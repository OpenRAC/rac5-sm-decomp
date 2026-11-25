/* LEVEL_20:0x023E70 -- placement copy of LEVEL_01_029910.c: takes the pending handles out of the two request tables, clears them, and closes each one. */
extern int func_023BA8(void);
extern int ps2fioClose(int);
extern int D_00137618[];
extern int D_00137818[];
extern unsigned int D_00104544;
extern unsigned int D_00104548;

void func_023E70(void)
{
    int handles[128];
    unsigned int n;
    unsigned int i;
    unsigned int j;

    ((int (*)(int))func_023BA8)(1);
    n = D_00104544;
    for (i = 0; i != n; i++) {
        handles[i] = D_00137618[i];
        D_00137618[i] = -1;
    }
    D_00104544 = 0;
    for (j = 0; j != n; j++) {
        ps2fioClose(handles[j]);
    }
    n = D_00104548;
    for (i = 0; i != n; i++) {
        handles[i] = D_00137818[i];
        D_00137818[i] = -1;
    }
    D_00104548 = 0;
    for (j = 0; j != n; j++) {
        ps2fioClose(handles[j]);
    }
}
