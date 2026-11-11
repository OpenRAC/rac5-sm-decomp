extern int D_001C7560;
extern int D_001C7564;
extern int D_001C7CE0[][3];
extern int func_0A0218(unsigned int slot);
extern void func_0A0BD8(int prev, int mode);

int func_0A02E8(unsigned int slot, unsigned int mode)
{
    int prev;

    prev = D_001C7564;
    if (func_0A0218(slot) == 0)
        return 0;
    if (slot >= 0xb)
        return 0;
    if (mode >= 3)
        return 0;
    if (D_001C7CE0[slot][mode] == 0)
        return 0;
    D_001C7560 = slot;
    D_001C7564 = mode;
    if (prev != mode)
        func_0A0BD8(prev, mode);
    return 1;
}
