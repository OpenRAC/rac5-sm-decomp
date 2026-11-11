extern int D_0023F7A0;
extern int D_0023F7A4;
extern int D_0023FF20[][3];
extern int func_0B1298(unsigned int slot);
extern void func_0B1C58(int prev, int mode);

int func_0B1368(unsigned int slot, unsigned int mode)
{
    int prev;

    prev = D_0023F7A4;
    if (func_0B1298(slot) == 0)
        return 0;
    if (slot >= 0xb)
        return 0;
    if (mode >= 3)
        return 0;
    if (D_0023FF20[slot][mode] == 0)
        return 0;
    D_0023F7A0 = slot;
    D_0023F7A4 = mode;
    if (prev != mode)
        func_0B1C58(prev, mode);
    return 1;
}
