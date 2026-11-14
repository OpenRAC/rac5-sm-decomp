/* LEVEL_18:0x0A6E80 -- placement copy of LEVEL_01_0B8E68.c: counts down the two per-index timers and calls the expiry helper when the second one reaches zero. */
extern int D_001ABCB8[];
extern int D_001ABCA8[];
extern void func_0A70B0(int index, int arg);

void func_0A6E80(int i)
{
    if (D_001ABCB8[i] != 0)
        D_001ABCB8[i]--;
    if (D_001ABCA8[i] != 0) {
        if (--D_001ABCA8[i] == 0)
            func_0A70B0(i, 0);
    }
}
