/* LEVEL_06:0x027CF8 -- placement copy of LEVEL_01_029910.c: takes the pending handles out of the two request tables, clears them, and closes each one. */
extern int func_027A30(void);
extern int ps2fioClose(int);
extern int D_0021DD18[];
extern int D_0021DF18[];
extern unsigned int D_001E3234;
extern unsigned int D_001E3238;

void func_027CF8(void)
{
    int handles[128];
    unsigned int n;
    unsigned int i;
    unsigned int j;

    ((int (*)(int))func_027A30)(1);
    n = D_001E3234;
    for (i = 0; i != n; i++) {
        handles[i] = D_0021DD18[i];
        D_0021DD18[i] = -1;
    }
    D_001E3234 = 0;
    for (j = 0; j != n; j++) {
        ps2fioClose(handles[j]);
    }
    n = D_001E3238;
    for (i = 0; i != n; i++) {
        handles[i] = D_0021DF18[i];
        D_0021DF18[i] = -1;
    }
    D_001E3238 = 0;
    for (j = 0; j != n; j++) {
        ps2fioClose(handles[j]);
    }
}
