extern int D_00155C60;
extern int D_00155C64;
extern int D_001563E0[][3];
extern int func_094FB0(unsigned int slot);
extern void func_095970(int prev, int mode);

int func_095080(unsigned int slot, unsigned int mode)
{
    int prev;

    prev = D_00155C64;
    if (func_094FB0(slot) == 0)
        return 0;
    if (slot >= 0xb)
        return 0;
    if (mode >= 3)
        return 0;
    if (D_001563E0[slot][mode] == 0)
        return 0;
    D_00155C60 = slot;
    D_00155C64 = mode;
    if (prev != mode)
        func_095970(prev, mode);
    return 1;
}
