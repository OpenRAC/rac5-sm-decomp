/* LEVEL_22:0x0A52D0 -- placement copy of LEVEL_01_0B6D80.c: counts down slot i of the timer table (saturating at 0) and clears the matching flag slot once it has run out. */
extern int D_0015BB50[];
extern int D_0015BB40[];

void func_0A52D0(int i)
{
    int *p;
    int v;

    p = &D_0015BB50[i];
    if (*p != 0) {
        *p = *p - 1;
        v = *p;
    } else {
        v = 0;
    }
    *p = v;
    if (D_0015BB50[i] == 0) {
        D_0015BB40[i] = 0;
    }
}
