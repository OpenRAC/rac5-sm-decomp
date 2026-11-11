extern int D_0020FDA0;
extern int D_0020FDA4;
extern int D_00210520[][3];
extern int func_0ABBB0(unsigned int slot);
extern void func_0AC570(int prev, int mode);

int func_0ABC80(unsigned int slot, unsigned int mode)
{
    int prev;

    prev = D_0020FDA4;
    if (func_0ABBB0(slot) == 0)
        return 0;
    if (slot >= 0xb)
        return 0;
    if (mode >= 3)
        return 0;
    if (D_00210520[slot][mode] == 0)
        return 0;
    D_0020FDA0 = slot;
    D_0020FDA4 = mode;
    if (prev != mode)
        func_0AC570(prev, mode);
    return 1;
}
