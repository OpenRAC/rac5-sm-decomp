extern int D_001C9CE0;
extern int D_001C9CE4;
extern int D_001CA460[][3];
extern int func_09D710(unsigned int slot);
extern void func_09E0D0(int prev, int mode);

int func_09D7E0(unsigned int slot, unsigned int mode)
{
    int prev;

    prev = D_001C9CE4;
    if (func_09D710(slot) == 0)
        return 0;
    if (slot >= 0xb)
        return 0;
    if (mode >= 3)
        return 0;
    if (D_001CA460[slot][mode] == 0)
        return 0;
    D_001C9CE0 = slot;
    D_001C9CE4 = mode;
    if (prev != mode)
        func_09E0D0(prev, mode);
    return 1;
}
