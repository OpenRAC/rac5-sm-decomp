extern char *D_0020F71C;

void func_08B080(unsigned int value)
{
    *(unsigned int *)(D_0020F71C + 0x100) =
        value & *(unsigned int *)(D_0020F71C + 0x1F8);
}
