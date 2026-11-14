/* LEVEL_10:0x0BA1B0 -- placement copy of LEVEL_01_0B8E68.c: counts down the two per-index timers and calls the expiry helper when the second one reaches zero. */
extern int D_002057B8[];
extern int D_002057A8[];
extern void func_0BA3D0(int index, int arg);

void func_0BA1B0(int i)
{
    if (D_002057B8[i] != 0)
        D_002057B8[i]--;
    if (D_002057A8[i] != 0) {
        if (--D_002057A8[i] == 0)
            func_0BA3D0(i, 0);
    }
}
