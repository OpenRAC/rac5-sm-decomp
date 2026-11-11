/* LEVEL_20:0x0903A0 -- placement copy of LEVEL_01_0B6D80.c: counts down slot i of the timer table (saturating at 0) and clears the matching flag slot once it has run out. */
extern int D_0010CF30[];
extern int D_0010CF20[];

void func_0903A0(int i)
{
    int *p;
    int v;

    p = &D_0010CF30[i];
    if (*p != 0) {
        *p = *p - 1;
        v = *p;
    } else {
        v = 0;
    }
    *p = v;
    if (D_0010CF30[i] == 0) {
        D_0010CF20[i] = 0;
    }
}
