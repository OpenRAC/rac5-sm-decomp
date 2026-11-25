/* LEVEL_02:0x02A0D8 -- placement copy of LEVEL_01_029910.c: takes the pending handles out of the two request tables, clears them, and closes each one. */
extern int func_029E10(void);
extern int ps2fioClose(int);
extern int D_00248498[];
extern int D_00248698[];
extern unsigned int D_00208FB4;
extern unsigned int D_00208FB8;

void func_02A0D8(void)
{
    int handles[128];
    unsigned int n;
    unsigned int i;
    unsigned int j;

    ((int (*)(int))func_029E10)(1);
    n = D_00208FB4;
    for (i = 0; i != n; i++) {
        handles[i] = D_00248498[i];
        D_00248498[i] = -1;
    }
    D_00208FB4 = 0;
    for (j = 0; j != n; j++) {
        ps2fioClose(handles[j]);
    }
    n = D_00208FB8;
    for (i = 0; i != n; i++) {
        handles[i] = D_00248698[i];
        D_00248698[i] = -1;
    }
    D_00208FB8 = 0;
    for (j = 0; j != n; j++) {
        ps2fioClose(handles[j]);
    }
}
