/* LEVEL_01:0x0A6A70 -- placement copy of LEVEL_02_0AD380.c. */
extern int D_001F68E0;
extern int D_001F68E4;
extern int D_001F7060[][3];
extern int func_0A69A0(unsigned int slot);
extern void func_0A7360(int prev, int mode);

int func_0A6A70(unsigned int slot, unsigned int mode)
{
    int prev;

    prev = D_001F68E4;
    if (func_0A69A0(slot) == 0)
        return 0;
    if (slot >= 0xb)
        return 0;
    if (mode >= 3)
        return 0;
    if (D_001F7060[slot][mode] == 0)
        return 0;
    D_001F68E0 = slot;
    D_001F68E4 = mode;
    if (prev != mode)
        func_0A7360(prev, mode);
    return 1;
}
