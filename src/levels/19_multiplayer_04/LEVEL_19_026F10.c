/* LEVEL_19:0x026F10 -- placement copy of LEVEL_01_029910.c: takes the pending handles out of the two request tables, clears them, and closes each one. */
extern int func_026C48(void);
extern int ps2fioClose(int);
extern int D_001DFE18[];
extern int D_001E0018[];
extern unsigned int D_001A2FE4;
extern unsigned int D_001A2FE8;

void func_026F10(void)
{
    int handles[128];
    unsigned int n;
    unsigned int i;
    unsigned int j;

    ((int (*)(int))func_026C48)(1);
    n = D_001A2FE4;
    for (i = 0; i != n; i++) {
        handles[i] = D_001DFE18[i];
        D_001DFE18[i] = -1;
    }
    D_001A2FE4 = 0;
    for (j = 0; j != n; j++) {
        ps2fioClose(handles[j]);
    }
    n = D_001A2FE8;
    for (i = 0; i != n; i++) {
        handles[i] = D_001E0018[i];
        D_001E0018[i] = -1;
    }
    D_001A2FE8 = 0;
    for (j = 0; j != n; j++) {
        ps2fioClose(handles[j]);
    }
}
