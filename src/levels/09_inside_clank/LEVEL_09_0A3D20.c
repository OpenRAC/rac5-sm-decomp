extern int D_001E06E0;
extern int D_001E06E4;
extern int D_001E0E60[][3];
extern int func_0A3C50(unsigned int slot);
extern void func_0A4610(int prev, int mode);

int func_0A3D20(unsigned int slot, unsigned int mode)
{
    int prev;

    prev = D_001E06E4;
    if (func_0A3C50(slot) == 0)
        return 0;
    if (slot >= 0xb)
        return 0;
    if (mode >= 3)
        return 0;
    if (D_001E0E60[slot][mode] == 0)
        return 0;
    D_001E06E0 = slot;
    D_001E06E4 = mode;
    if (prev != mode)
        func_0A4610(prev, mode);
    return 1;
}
