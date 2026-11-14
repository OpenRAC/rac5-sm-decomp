/* LEVEL_16:0x0A7EA8 -- placement copy of LEVEL_01_0B8E68.c: counts down the two per-index timers and calls the expiry helper when the second one reaches zero. */
extern int D_001AA838[];
extern int D_001AA828[];
extern void func_0A80D8(int index, int arg);

void func_0A7EA8(int i)
{
    if (D_001AA838[i] != 0)
        D_001AA838[i]--;
    if (D_001AA828[i] != 0) {
        if (--D_001AA828[i] == 0)
            func_0A80D8(i, 0);
    }
}
