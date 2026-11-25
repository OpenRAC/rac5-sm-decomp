/* LEVEL_05:0x028588 -- placement copy of LEVEL_01_029910.c: takes the pending handles out of the two request tables, clears them, and closes each one. */
extern int func_0282C0(void);
extern int ps2fioClose(int);
extern int D_0021CC98[];
extern int D_0021CE98[];
extern unsigned int D_001E36B4;
extern unsigned int D_001E36B8;

void func_028588(void)
{
    int handles[128];
    unsigned int n;
    unsigned int i;
    unsigned int j;

    ((int (*)(int))func_0282C0)(1);
    n = D_001E36B4;
    for (i = 0; i != n; i++) {
        handles[i] = D_0021CC98[i];
        D_0021CC98[i] = -1;
    }
    D_001E36B4 = 0;
    for (j = 0; j != n; j++) {
        ps2fioClose(handles[j]);
    }
    n = D_001E36B8;
    for (i = 0; i != n; i++) {
        handles[i] = D_0021CE98[i];
        D_0021CE98[i] = -1;
    }
    D_001E36B8 = 0;
    for (j = 0; j != n; j++) {
        ps2fioClose(handles[j]);
    }
}
