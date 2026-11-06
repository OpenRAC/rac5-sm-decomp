extern char *D_001E005C;
extern void func_084810(int);

void func_0847B8(unsigned int mask, int index)
{
    func_084810(index);
    *(unsigned int *)(D_001E005C + 0x100) =
        mask & *(unsigned int *)(D_001E005C + 0x1f8);
    func_084810(0);
}
