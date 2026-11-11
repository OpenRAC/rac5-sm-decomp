extern int D_0020ABE0;
extern int D_0020ABE4;
extern int D_0020B360[][3];
extern int func_0A89A0(unsigned int slot);
extern void func_0A9360(int prev, int mode);

int func_0A8A70(unsigned int slot, unsigned int mode)
{
    int prev;

    prev = D_0020ABE4;
    if (func_0A89A0(slot) == 0)
        return 0;
    if (slot >= 0xb)
        return 0;
    if (mode >= 3)
        return 0;
    if (D_0020B360[slot][mode] == 0)
        return 0;
    D_0020ABE0 = slot;
    D_0020ABE4 = mode;
    if (prev != mode)
        func_0A9360(prev, mode);
    return 1;
}
