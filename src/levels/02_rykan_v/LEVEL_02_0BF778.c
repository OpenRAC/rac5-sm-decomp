/* LEVEL_02:0x0BF778 -- placement copy of LEVEL_01_0B8E68.c: counts down the two per-index timers and calls the expiry helper when the second one reaches zero. */
extern int D_00211778[];
extern int D_00211768[];
extern void func_0BF998(int index, int arg);

void func_0BF778(int i)
{
    if (D_00211778[i] != 0)
        D_00211778[i]--;
    if (D_00211768[i] != 0) {
        if (--D_00211768[i] == 0)
            func_0BF998(i, 0);
    }
}
