/* LEVEL_18:0x0A4D98 -- placement copy of LEVEL_01_0B6D80.c: counts down slot i of the timer table (saturating at 0) and clears the matching flag slot once it has run out. */
extern int D_001ABCD0[];
extern int D_001ABCC0[];

void func_0A4D98(int i)
{
    int *p;
    int v;

    p = &D_001ABCD0[i];
    if (*p != 0) {
        *p = *p - 1;
        v = *p;
    } else {
        v = 0;
    }
    *p = v;
    if (D_001ABCD0[i] == 0) {
        D_001ABCC0[i] = 0;
    }
}
