/* LEVEL_04:0x0BE670 -- placement copy of LEVEL_01_0B8E68.c: counts down the two per-index timers and calls the expiry helper when the second one reaches zero. */
extern int D_00215C78[];
extern int D_00215C68[];
extern void func_0BE868(int index, int arg);

void func_0BE670(int i)
{
    if (D_00215C78[i] != 0)
        D_00215C78[i]--;
    if (D_00215C68[i] != 0) {
        if (--D_00215C68[i] == 0)
            func_0BE868(i, 0);
    }
}
