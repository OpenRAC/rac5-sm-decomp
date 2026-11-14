/* LEVEL_06:0x0B3768 -- placement copy of LEVEL_01_0B8E68.c: counts down the two per-index timers and calls the expiry helper when the second one reaches zero. */
extern int D_001EB6B8[];
extern int D_001EB6A8[];
extern void func_0B3988(int index, int arg);

void func_0B3768(int i)
{
    if (D_001EB6B8[i] != 0)
        D_001EB6B8[i]--;
    if (D_001EB6A8[i] != 0) {
        if (--D_001EB6A8[i] == 0)
            func_0B3988(i, 0);
    }
}
