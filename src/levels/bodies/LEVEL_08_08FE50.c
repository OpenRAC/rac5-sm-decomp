extern char *D_0023F11C;
extern void func_08FEA8(int);

void func_08FE50(unsigned int mask, int index)
{
    func_08FEA8(index);
    *(unsigned int *)(D_0023F11C + 0x100) =
        mask & *(unsigned int *)(D_0023F11C + 0x1f8);
    func_08FEA8(0);
}
