/* LEVEL_02:0x0BD690 -- placement copy of LEVEL_01_0B6D80.c: counts down slot i of the timer table (saturating at 0) and clears the matching flag slot once it has run out. */
extern int D_00211790[];
extern int D_00211780[];

void func_0BD690(int i)
{
    int *p;
    int v;

    p = &D_00211790[i];
    if (*p != 0) {
        *p = *p - 1;
        v = *p;
    } else {
        v = 0;
    }
    *p = v;
    if (D_00211790[i] == 0) {
        D_00211780[i] = 0;
    }
}
