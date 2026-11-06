extern int D_0014B560;
extern int D_0014B564;
extern int D_0014BCE0[][3];
extern int func_087268(unsigned int slot);
extern void func_087C28(int prev, int mode);

int func_087338(unsigned int slot, unsigned int mode)
{
    int prev;

    prev = D_0014B564;
    if (func_087268(slot) == 0)
        return 0;
    if (slot >= 0xb)
        return 0;
    if (mode >= 3)
        return 0;
    if (D_0014BCE0[slot][mode] == 0)
        return 0;
    D_0014B560 = slot;
    D_0014B564 = mode;
    if (prev != mode)
        func_087C28(prev, mode);
    return 1;
}
