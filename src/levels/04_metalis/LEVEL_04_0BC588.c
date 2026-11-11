/* LEVEL_04:0x0BC588 -- placement copy of LEVEL_01_0B6D80.c: counts down slot i of the timer table (saturating at 0) and clears the matching flag slot once it has run out. */
extern int D_00215C90[];
extern int D_00215C80[];

void func_0BC588(int i)
{
    int *p;
    int v;

    p = &D_00215C90[i];
    if (*p != 0) {
        *p = *p - 1;
        v = *p;
    } else {
        v = 0;
    }
    *p = v;
    if (D_00215C90[i] == 0) {
        D_00215C80[i] = 0;
    }
}
