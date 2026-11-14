/* LEVEL_07:0x0BAEC8 -- placement copy of LEVEL_01_0B8E68.c: counts down the two per-index timers and calls the expiry helper when the second one reaches zero. */
extern int D_00210AB8[];
extern int D_00210AA8[];
extern void func_0BB0E8(int index, int arg);

void func_0BAEC8(int i)
{
    if (D_00210AB8[i] != 0)
        D_00210AB8[i]--;
    if (D_00210AA8[i] != 0) {
        if (--D_00210AA8[i] == 0)
            func_0BB0E8(i, 0);
    }
}
