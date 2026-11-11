extern char *D_001C965C;

void func_07DCA8(unsigned int value)
{
    *(unsigned int *)(D_001C965C + 0x100) =
        value & *(unsigned int *)(D_001C965C + 0x1F8);
}
