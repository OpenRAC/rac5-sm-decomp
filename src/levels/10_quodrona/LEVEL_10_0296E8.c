/* LEVEL_10:0x0296E8 -- placement copy of LEVEL_01_029910.c: takes the pending handles out of the two request tables, clears them, and closes each one. */
extern int func_029420(void);
extern int ps2fioClose(int);
extern int D_0023A398[];
extern int D_0023A598[];
extern unsigned int D_001FD334;
extern unsigned int D_001FD338;

void func_0296E8(void)
{
    int handles[128];
    unsigned int n;
    unsigned int i;
    unsigned int j;

    ((int (*)(int))func_029420)(1);
    n = D_001FD334;
    for (i = 0; i != n; i++) {
        handles[i] = D_0023A398[i];
        D_0023A398[i] = -1;
    }
    D_001FD334 = 0;
    for (j = 0; j != n; j++) {
        ps2fioClose(handles[j]);
    }
    n = D_001FD338;
    for (i = 0; i != n; i++) {
        handles[i] = D_0023A598[i];
        D_0023A598[i] = -1;
    }
    D_001FD338 = 0;
    for (j = 0; j != n; j++) {
        ps2fioClose(handles[j]);
    }
}
