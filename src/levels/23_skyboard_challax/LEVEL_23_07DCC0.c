extern char *D_001C965C;
extern void func_07DD18(int);

void func_07DCC0(unsigned int mask, int index)
{
    func_07DD18(index);
    *(unsigned int *)(D_001C965C + 0x100) =
        mask & *(unsigned int *)(D_001C965C + 0x1f8);
    func_07DD18(0);
}
