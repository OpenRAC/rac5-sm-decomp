/* LEVEL_17:0x0A5300 -- placement copy of LEVEL_01_0B6D80.c: counts down slot i of the timer table (saturating at 0) and clears the matching flag slot once it has run out. */
extern int D_0019DE50[];
extern int D_0019DE40[];

void func_0A5300(int i)
{
    int *p;
    int v;

    p = &D_0019DE50[i];
    if (*p != 0) {
        *p = *p - 1;
        v = *p;
    } else {
        v = 0;
    }
    *p = v;
    if (D_0019DE50[i] == 0) {
        D_0019DE40[i] = 0;
    }
}
