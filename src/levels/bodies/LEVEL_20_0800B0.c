extern int D_00106F90;
extern int D_00106F94;
extern int D_00107710[][3];
extern int func_080010(unsigned int slot);
extern void func_080330(int prev, int mode);

int func_0800B0(unsigned int slot, unsigned int mode)
{
    int prev;

    prev = D_00106F94;
    if (func_080010(slot) == 0)
        return 0;
    if (slot >= 0xb)
        return 0;
    if (mode >= 3)
        return 0;
    if (D_00107710[slot][mode] == 0)
        return 0;
    D_00106F90 = slot;
    D_00106F94 = mode;
    if (prev != mode)
        func_080330(prev, mode);
    return 1;
}
