/* LEVEL_17:0x026CE8 -- placement copy of LEVEL_01_029910.c: takes the pending handles out of the two request tables, clears them, and closes each one. */
extern int func_026A20(void);
extern int ps2fioClose(int);
extern int D_001D0F98[];
extern int D_001D1198[];
extern unsigned int D_00195464;
extern unsigned int D_00195468;

void func_026CE8(void)
{
    int handles[128];
    unsigned int n;
    unsigned int i;
    unsigned int j;

    ((int (*)(int))func_026A20)(1);
    n = D_00195464;
    for (i = 0; i != n; i++) {
        handles[i] = D_001D0F98[i];
        D_001D0F98[i] = -1;
    }
    D_00195464 = 0;
    for (j = 0; j != n; j++) {
        ps2fioClose(handles[j]);
    }
    n = D_00195468;
    for (i = 0; i != n; i++) {
        handles[i] = D_001D1198[i];
        D_001D1198[i] = -1;
    }
    D_00195468 = 0;
    for (j = 0; j != n; j++) {
        ps2fioClose(handles[j]);
    }
}
