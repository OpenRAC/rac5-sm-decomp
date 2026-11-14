/* LEVEL_08:0x0C3D58 -- placement copy of LEVEL_01_0B8E68.c: counts down the two per-index timers and calls the expiry helper when the second one reaches zero. */
extern int D_00245678[];
extern int D_00245668[];
extern void func_0C3F78(int index, int arg);

void func_0C3D58(int i)
{
    if (D_00245678[i] != 0)
        D_00245678[i]--;
    if (D_00245668[i] != 0) {
        if (--D_00245668[i] == 0)
            func_0C3F78(i, 0);
    }
}
