extern int D_0020B8A0;
extern int D_0020B8A4;
extern int D_0020C020[][3];
extern int func_0AD2B0(unsigned int slot);
extern void func_0ADC70(int prev, int mode);

int func_0AD380(unsigned int slot, unsigned int mode)
{
    int prev;

    prev = D_0020B8A4;
    if (func_0AD2B0(slot) == 0)
        return 0;
    if (slot >= 0xb)
        return 0;
    if (mode >= 3)
        return 0;
    if (D_0020C020[slot][mode] == 0)
        return 0;
    D_0020B8A0 = slot;
    D_0020B8A4 = mode;
    if (prev != mode)
        func_0ADC70(prev, mode);
    return 1;
}
