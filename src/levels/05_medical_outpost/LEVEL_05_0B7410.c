/* LEVEL_05:0x0B7410 -- placement copy of LEVEL_01_0B8E68.c: counts down the two per-index timers and calls the expiry helper when the second one reaches zero. */
extern int D_001EBB38[];
extern int D_001EBB28[];
extern void func_0B7630(int index, int arg);

void func_0B7410(int i)
{
    if (D_001EBB38[i] != 0)
        D_001EBB38[i]--;
    if (D_001EBB28[i] != 0) {
        if (--D_001EBB28[i] == 0)
            func_0B7630(i, 0);
    }
}
