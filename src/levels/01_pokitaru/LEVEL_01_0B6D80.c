/* LEVEL_01:0x0B6D80 -- counts down slot i of the timer table (saturating at 0) and clears the matching flag slot once it has run out. */
extern int D_001FC7D0[];
extern int D_001FC7C0[];

void func_0B6D80(int i)
{
    int *p;
    int v;

    p = &D_001FC7D0[i];
    if (*p != 0) {
        *p = *p - 1;
        v = *p;
    } else {
        v = 0;
    }
    *p = v;
    if (D_001FC7D0[i] == 0) {
        D_001FC7C0[i] = 0;
    }
}
