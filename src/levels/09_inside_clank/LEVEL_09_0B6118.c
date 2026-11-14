/* LEVEL_09:0x0B6118 -- placement copy of LEVEL_01_0B8E68.c: counts down the two per-index timers and calls the expiry helper when the second one reaches zero. */
extern int D_001E65B8[];
extern int D_001E65A8[];
extern void func_0B6338(int index, int arg);

void func_0B6118(int i)
{
    if (D_001E65B8[i] != 0)
        D_001E65B8[i]--;
    if (D_001E65A8[i] != 0) {
        if (--D_001E65A8[i] == 0)
            func_0B6338(i, 0);
    }
}
