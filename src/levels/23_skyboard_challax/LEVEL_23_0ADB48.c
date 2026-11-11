/* LEVEL_23:0x0ADB48 -- placement copy of LEVEL_01_0B6D80.c: counts down slot i of the timer table (saturating at 0) and clears the matching flag slot once it has run out. */
extern int D_001CFBD0[];
extern int D_001CFBC0[];

void func_0ADB48(int i)
{
    int *p;
    int v;

    p = &D_001CFBD0[i];
    if (*p != 0) {
        *p = *p - 1;
        v = *p;
    } else {
        v = 0;
    }
    *p = v;
    if (D_001CFBD0[i] == 0) {
        D_001CFBC0[i] = 0;
    }
}
