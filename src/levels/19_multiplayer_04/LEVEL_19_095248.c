extern int D_001A5A30;
extern int D_001A5A34;
extern int D_001A61B0[][3];
extern int func_0951A8(unsigned int slot);
extern void func_0954C8(int prev, int mode);

int func_095248(unsigned int slot, unsigned int mode)
{
    int prev;

    prev = D_001A5A34;
    if (func_0951A8(slot) == 0)
        return 0;
    if (slot >= 0xb)
        return 0;
    if (mode >= 3)
        return 0;
    if (D_001A61B0[slot][mode] == 0)
        return 0;
    D_001A5A30 = slot;
    D_001A5A34 = mode;
    if (prev != mode)
        func_0954C8(prev, mode);
    return 1;
}
