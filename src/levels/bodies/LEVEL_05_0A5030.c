extern int D_001E5C60;
extern int D_001E5C64;
extern int D_001E63E0[][3];
extern int func_0A4F60(unsigned int slot);
extern void func_0A5920(int prev, int mode);

int func_0A5030(unsigned int slot, unsigned int mode)
{
    int prev;

    prev = D_001E5C64;
    if (func_0A4F60(slot) == 0)
        return 0;
    if (slot >= 0xb)
        return 0;
    if (mode >= 3)
        return 0;
    if (D_001E63E0[slot][mode] == 0)
        return 0;
    D_001E5C60 = slot;
    D_001E5C64 = mode;
    if (prev != mode)
        func_0A5920(prev, mode);
    return 1;
}
