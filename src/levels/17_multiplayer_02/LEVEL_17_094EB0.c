extern int D_00197EB0;
extern int D_00197EB4;
extern int D_00198630[][3];
extern int func_094E10(unsigned int slot);
extern void func_095130(int prev, int mode);

int func_094EB0(unsigned int slot, unsigned int mode)
{
    int prev;

    prev = D_00197EB4;
    if (func_094E10(slot) == 0)
        return 0;
    if (slot >= 0xb)
        return 0;
    if (mode >= 3)
        return 0;
    if (D_00198630[slot][mode] == 0)
        return 0;
    D_00197EB0 = slot;
    D_00197EB4 = mode;
    if (prev != mode)
        func_095130(prev, mode);
    return 1;
}
