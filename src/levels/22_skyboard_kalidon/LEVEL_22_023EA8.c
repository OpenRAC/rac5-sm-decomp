/* LEVEL_22:0x023EA8 -- placement copy of LEVEL_01_029910.c: takes the pending handles out of the two request tables, clears them, and closes each one. */
extern int func_023BE0(void);
extern int ps2fioClose(int);
extern int D_00182B98[];
extern int D_00182D98[];
extern unsigned int D_001536B4;
extern unsigned int D_001536B8;

void func_023EA8(void)
{
    int handles[128];
    unsigned int n;
    unsigned int i;
    unsigned int j;

    ((int (*)(int))func_023BE0)(1);
    n = D_001536B4;
    for (i = 0; i != n; i++) {
        handles[i] = D_00182B98[i];
        D_00182B98[i] = -1;
    }
    D_001536B4 = 0;
    for (j = 0; j != n; j++) {
        ps2fioClose(handles[j]);
    }
    n = D_001536B8;
    for (i = 0; i != n; i++) {
        handles[i] = D_00182D98[i];
        D_00182D98[i] = -1;
    }
    D_001536B8 = 0;
    for (j = 0; j != n; j++) {
        ps2fioClose(handles[j]);
    }
}
