/* LEVEL_20:0x092428 -- placement copy of LEVEL_01_0B8E68.c: counts down the two per-index timers and calls the expiry helper when the second one reaches zero. */
extern int D_0010CF18[];
extern int D_0010CF08[];
extern void func_092608(int index, int arg);

void func_092428(int i)
{
    if (D_0010CF18[i] != 0)
        D_0010CF18[i]--;
    if (D_0010CF08[i] != 0) {
        if (--D_0010CF08[i] == 0)
            func_092608(i, 0);
    }
}
