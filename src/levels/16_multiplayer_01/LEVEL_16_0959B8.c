extern int D_001A48B0;
extern int D_001A48B4;
extern int D_001A5030[][3];
extern int func_095918(unsigned int slot);
extern void func_095C38(int prev, int mode);

int func_0959B8(unsigned int slot, unsigned int mode)
{
    int prev;

    prev = D_001A48B4;
    if (func_095918(slot) == 0)
        return 0;
    if (slot >= 0xb)
        return 0;
    if (mode >= 3)
        return 0;
    if (D_001A5030[slot][mode] == 0)
        return 0;
    D_001A48B0 = slot;
    D_001A48B4 = mode;
    if (prev != mode)
        func_095C38(prev, mode);
    return 1;
}
