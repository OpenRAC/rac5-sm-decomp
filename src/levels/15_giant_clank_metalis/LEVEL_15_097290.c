/* LEVEL_15:0x097290 -- placement copy of LEVEL_01_0B6D80.c: counts down slot i of the timer table (saturating at 0) and clears the matching flag slot once it has run out. */
extern int D_00151450[];
extern int D_00151440[];

void func_097290(int i)
{
    int *p;
    int v;

    p = &D_00151450[i];
    if (*p != 0) {
        *p = *p - 1;
        v = *p;
    } else {
        v = 0;
    }
    *p = v;
    if (D_00151450[i] == 0) {
        D_00151440[i] = 0;
    }
}
