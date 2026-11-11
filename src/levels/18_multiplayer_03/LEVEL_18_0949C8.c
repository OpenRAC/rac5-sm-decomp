extern int D_001A5D30;
extern int D_001A5D34;
extern int D_001A64B0[][3];
extern int func_094928(unsigned int slot);
extern void func_094C48(int prev, int mode);

int func_0949C8(unsigned int slot, unsigned int mode)
{
    int prev;

    prev = D_001A5D34;
    if (func_094928(slot) == 0)
        return 0;
    if (slot >= 0xb)
        return 0;
    if (mode >= 3)
        return 0;
    if (D_001A64B0[slot][mode] == 0)
        return 0;
    D_001A5D30 = slot;
    D_001A5D34 = mode;
    if (prev != mode)
        func_094C48(prev, mode);
    return 1;
}
