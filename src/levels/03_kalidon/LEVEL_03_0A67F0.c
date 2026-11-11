extern int D_0020EF60;
extern int D_0020EF64;
extern int D_0020F6E0[][3];
extern int func_0A6720(unsigned int slot);
extern void func_0A70E0(int prev, int mode);

int func_0A67F0(unsigned int slot, unsigned int mode)
{
    int prev;

    prev = D_0020EF64;
    if (func_0A6720(slot) == 0)
        return 0;
    if (slot >= 0xb)
        return 0;
    if (mode >= 3)
        return 0;
    if (D_0020F6E0[slot][mode] == 0)
        return 0;
    D_0020EF60 = slot;
    D_0020EF64 = mode;
    if (prev != mode)
        func_0A70E0(prev, mode);
    return 1;
}
