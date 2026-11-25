/* LEVEL_04:0x0293B8 -- placement copy of LEVEL_01_029910.c: takes the pending handles out of the two request tables, clears them, and closes each one. */
extern int func_0290F0(void);
extern int ps2fioClose(int);
extern int D_0024B798[];
extern int D_0024B998[];
extern unsigned int D_0020D4B4;
extern unsigned int D_0020D4B8;

void func_0293B8(void)
{
    int handles[128];
    unsigned int n;
    unsigned int i;
    unsigned int j;

    ((int (*)(int))func_0290F0)(1);
    n = D_0020D4B4;
    for (i = 0; i != n; i++) {
        handles[i] = D_0024B798[i];
        D_0024B798[i] = -1;
    }
    D_0020D4B4 = 0;
    for (j = 0; j != n; j++) {
        ps2fioClose(handles[j]);
    }
    n = D_0020D4B8;
    for (i = 0; i != n; i++) {
        handles[i] = D_0024B998[i];
        D_0024B998[i] = -1;
    }
    D_0020D4B8 = 0;
    for (j = 0; j != n; j++) {
        ps2fioClose(handles[j]);
    }
}
