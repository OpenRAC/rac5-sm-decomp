/* LEVEL_19:0x0A7780 -- placement copy of LEVEL_01_0B8E68.c: counts down the two per-index timers and calls the expiry helper when the second one reaches zero. */
extern int D_001AB9B8[];
extern int D_001AB9A8[];
extern void func_0A79B0(int index, int arg);

void func_0A7780(int i)
{
    if (D_001AB9B8[i] != 0)
        D_001AB9B8[i]--;
    if (D_001AB9A8[i] != 0) {
        if (--D_001AB9A8[i] == 0)
            func_0A79B0(i, 0);
    }
}
