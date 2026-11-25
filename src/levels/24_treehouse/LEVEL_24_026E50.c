/* LEVEL_24:0x026E50 -- placement copy of LEVEL_01_029910.c: takes the pending handles out of the two request tables, clears them, and closes each one. */
extern int func_026B88(void);
extern int ps2fioClose(int);
extern int D_001FCE98[];
extern int D_001FD098[];
extern unsigned int D_001C4FB4;
extern unsigned int D_001C4FB8;

void func_026E50(void)
{
    int handles[128];
    unsigned int n;
    unsigned int i;
    unsigned int j;

    ((int (*)(int))func_026B88)(1);
    n = D_001C4FB4;
    for (i = 0; i != n; i++) {
        handles[i] = D_001FCE98[i];
        D_001FCE98[i] = -1;
    }
    D_001C4FB4 = 0;
    for (j = 0; j != n; j++) {
        ps2fioClose(handles[j]);
    }
    n = D_001C4FB8;
    for (i = 0; i != n; i++) {
        handles[i] = D_001FD098[i];
        D_001FD098[i] = -1;
    }
    D_001C4FB8 = 0;
    for (j = 0; j != n; j++) {
        ps2fioClose(handles[j]);
    }
}
