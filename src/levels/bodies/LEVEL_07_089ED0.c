extern char *D_0020A55C;
extern void func_089F28(int);

void func_089ED0(unsigned int mask, int index)
{
    func_089F28(index);
    *(unsigned int *)(D_0020A55C + 0x100) =
        mask & *(unsigned int *)(D_0020A55C + 0x1f8);
    func_089F28(0);
}
