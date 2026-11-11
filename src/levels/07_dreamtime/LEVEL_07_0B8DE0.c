/* LEVEL_07:0x0B8DE0 -- placement copy of LEVEL_01_0B6D80.c: counts down slot i of the timer table (saturating at 0) and clears the matching flag slot once it has run out. */
extern int D_00210AD0[];
extern int D_00210AC0[];

void func_0B8DE0(int i)
{
    int *p;
    int v;

    p = &D_00210AD0[i];
    if (*p != 0) {
        *p = *p - 1;
        v = *p;
    } else {
        v = 0;
    }
    *p = v;
    if (D_00210AD0[i] == 0) {
        D_00210AC0[i] = 0;
    }
}
