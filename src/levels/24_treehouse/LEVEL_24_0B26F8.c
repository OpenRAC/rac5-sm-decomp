/* LEVEL_24:0x0B26F8 -- placement copy of LEVEL_01_0B8E68.c: counts down the two per-index timers and calls the expiry helper when the second one reaches zero. */
extern int D_001CD438[];
extern int D_001CD428[];
extern void func_0B2918(int index, int arg);

void func_0B26F8(int i)
{
    if (D_001CD438[i] != 0)
        D_001CD438[i]--;
    if (D_001CD428[i] != 0) {
        if (--D_001CD428[i] == 0)
            func_0B2918(i, 0);
    }
}
