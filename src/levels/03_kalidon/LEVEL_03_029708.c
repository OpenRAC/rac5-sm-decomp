/* LEVEL_03:0x029708 -- placement copy of LEVEL_01_029910.c: takes the pending handles out of the two request tables, clears them, and closes each one. */
extern int func_029440(void);
extern int ps2fioClose(int);
extern int D_0024BE18[];
extern int D_0024C018[];
extern unsigned int D_0020C9B4;
extern unsigned int D_0020C9B8;

void func_029708(void)
{
    int handles[128];
    unsigned int n;
    unsigned int i;
    unsigned int j;

    ((int (*)(int))func_029440)(1);
    n = D_0020C9B4;
    for (i = 0; i != n; i++) {
        handles[i] = D_0024BE18[i];
        D_0024BE18[i] = -1;
    }
    D_0020C9B4 = 0;
    for (j = 0; j != n; j++) {
        ps2fioClose(handles[j]);
    }
    n = D_0020C9B8;
    for (i = 0; i != n; i++) {
        handles[i] = D_0024C018[i];
        D_0024C018[i] = -1;
    }
    D_0020C9B8 = 0;
    for (j = 0; j != n; j++) {
        ps2fioClose(handles[j]);
    }
}
