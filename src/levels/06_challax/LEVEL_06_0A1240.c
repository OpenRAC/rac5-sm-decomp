extern int D_001E57E0;
extern int D_001E57E4;
extern int D_001E5F60[][3];
extern int func_0A1170(unsigned int slot);
extern void func_0A1B30(int prev, int mode);

int func_0A1240(unsigned int slot, unsigned int mode)
{
    int prev;

    prev = D_001E57E4;
    if (func_0A1170(slot) == 0)
        return 0;
    if (slot >= 0xb)
        return 0;
    if (mode >= 3)
        return 0;
    if (D_001E5F60[slot][mode] == 0)
        return 0;
    D_001E57E0 = slot;
    D_001E57E4 = mode;
    if (prev != mode)
        func_0A1B30(prev, mode);
    return 1;
}
