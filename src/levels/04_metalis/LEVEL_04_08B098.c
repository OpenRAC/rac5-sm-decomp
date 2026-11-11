extern char *D_0020F71C;
extern void func_08B0F0(int);

void func_08B098(unsigned int mask, int index)
{
    func_08B0F0(index);
    *(unsigned int *)(D_0020F71C + 0x100) =
        mask & *(unsigned int *)(D_0020F71C + 0x1f8);
    func_08B0F0(0);
}
