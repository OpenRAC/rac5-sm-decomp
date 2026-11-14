/* LEVEL_03:0x0B8C50 -- placement copy of LEVEL_01_0B8E68.c: counts down the two per-index timers and calls the expiry helper when the second one reaches zero. */
extern int D_00214E38[];
extern int D_00214E28[];
extern void func_0B8E70(int index, int arg);

void func_0B8C50(int i)
{
    if (D_00214E38[i] != 0)
        D_00214E38[i]--;
    if (D_00214E28[i] != 0) {
        if (--D_00214E28[i] == 0)
            func_0B8E70(i, 0);
    }
}
