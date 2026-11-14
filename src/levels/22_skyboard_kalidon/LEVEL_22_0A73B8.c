/* LEVEL_22:0x0A73B8 -- placement copy of LEVEL_01_0B8E68.c: counts down the two per-index timers and calls the expiry helper when the second one reaches zero. */
extern int D_0015BB38[];
extern int D_0015BB28[];
extern void func_0A7530(int index, int arg);

void func_0A73B8(int i)
{
    if (D_0015BB38[i] != 0)
        D_0015BB38[i]--;
    if (D_0015BB28[i] != 0) {
        if (--D_0015BB28[i] == 0)
            func_0A7530(i, 0);
    }
}
