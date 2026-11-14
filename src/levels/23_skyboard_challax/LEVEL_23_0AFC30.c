/* LEVEL_23:0x0AFC30 -- placement copy of LEVEL_01_0B8E68.c: counts down the two per-index timers and calls the expiry helper when the second one reaches zero. */
extern int D_001CFBB8[];
extern int D_001CFBA8[];
extern void func_0AFE20(int index, int arg);

void func_0AFC30(int i)
{
    if (D_001CFBB8[i] != 0)
        D_001CFBB8[i]--;
    if (D_001CFBA8[i] != 0) {
        if (--D_001CFBA8[i] == 0)
            func_0AFE20(i, 0);
    }
}
