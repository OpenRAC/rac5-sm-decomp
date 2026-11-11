extern int D_001FF8E0;
extern int D_001FF8E4;
extern int D_00200060[][3];
extern int func_0A7AB8(unsigned int slot);
extern void func_0A8478(int prev, int mode);

int func_0A7B88(unsigned int slot, unsigned int mode)
{
    int prev;

    prev = D_001FF8E4;
    if (func_0A7AB8(slot) == 0)
        return 0;
    if (slot >= 0xb)
        return 0;
    if (mode >= 3)
        return 0;
    if (D_00200060[slot][mode] == 0)
        return 0;
    D_001FF8E0 = slot;
    D_001FF8E4 = mode;
    if (prev != mode)
        func_0A8478(prev, mode);
    return 1;
}
