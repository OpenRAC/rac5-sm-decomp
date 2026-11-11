extern char *D_001A540C;

void func_079810(unsigned int value)
{
    *(unsigned int *)(D_001A540C + 0x100) =
        value & *(unsigned int *)(D_001A540C + 0x1F8);
}
