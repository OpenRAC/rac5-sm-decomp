/* LEVEL_01:0x0B8E68 -- counts down the two per-index timers and calls the expiry helper when the second one reaches zero. */
extern int D_001FC7B8[];
extern int D_001FC7A8[];
extern void func_0B9088(int index, int arg);

void func_0B8E68(int i)
{
    if (D_001FC7B8[i] != 0)
        D_001FC7B8[i]--;
    if (D_001FC7A8[i] != 0) {
        if (--D_001FC7A8[i] == 0)
            func_0B9088(i, 0);
    }
}
