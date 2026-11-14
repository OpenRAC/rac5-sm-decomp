/* LEVEL_21:0x099508 -- placement copy of LEVEL_01_0B8E68.c: counts down the two per-index timers and calls the expiry helper when the second one reaches zero. */
extern int D_00151438[];
extern int D_00151428[];
extern void func_0996D0(int index, int arg);

void func_099508(int i)
{
    if (D_00151438[i] != 0)
        D_00151438[i]--;
    if (D_00151428[i] != 0) {
        if (--D_00151428[i] == 0)
            func_0996D0(i, 0);
    }
}
