/* LEVEL_08:0x0C1C70 -- placement copy of LEVEL_01_0B6D80.c: counts down slot i of the timer table (saturating at 0) and clears the matching flag slot once it has run out. */
extern int D_00245690[];
extern int D_00245680[];

void func_0C1C70(int i)
{
    int *p;
    int v;

    p = &D_00245690[i];
    if (*p != 0) {
        *p = *p - 1;
        v = *p;
    } else {
        v = 0;
    }
    *p = v;
    if (D_00245690[i] == 0) {
        D_00245680[i] = 0;
    }
}
