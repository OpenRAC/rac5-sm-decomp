/* LEVEL_17:0x0A73E8 -- placement copy of LEVEL_01_0B8E68.c: counts down the two per-index timers and calls the expiry helper when the second one reaches zero. */
extern int D_0019DE38[];
extern int D_0019DE28[];
extern void func_0A7618(int index, int arg);

void func_0A73E8(int i)
{
    if (D_0019DE38[i] != 0)
        D_0019DE38[i]--;
    if (D_0019DE28[i] != 0) {
        if (--D_0019DE28[i] == 0)
            func_0A7618(i, 0);
    }
}
