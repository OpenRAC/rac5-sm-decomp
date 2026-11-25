/* LEVEL_16:0x027368 -- placement copy of LEVEL_01_029910.c: takes the pending handles out of the two request tables, clears them, and closes each one. */
extern int func_0270A0(void);
extern int ps2fioClose(int);
extern int D_001DFC98[];
extern int D_001DFE98[];
extern unsigned int D_001A1E64;
extern unsigned int D_001A1E68;

void func_027368(void)
{
    int handles[128];
    unsigned int n;
    unsigned int i;
    unsigned int j;

    ((int (*)(int))func_0270A0)(1);
    n = D_001A1E64;
    for (i = 0; i != n; i++) {
        handles[i] = D_001DFC98[i];
        D_001DFC98[i] = -1;
    }
    D_001A1E64 = 0;
    for (j = 0; j != n; j++) {
        ps2fioClose(handles[j]);
    }
    n = D_001A1E68;
    for (i = 0; i != n; i++) {
        handles[i] = D_001DFE98[i];
        D_001DFE98[i] = -1;
    }
    D_001A1E68 = 0;
    for (j = 0; j != n; j++) {
        ps2fioClose(handles[j]);
    }
}
