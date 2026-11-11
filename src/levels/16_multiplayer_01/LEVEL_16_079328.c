extern char *D_001A428C;

void func_079328(unsigned int value)
{
    *(unsigned int *)(D_001A428C + 0x100) =
        value & *(unsigned int *)(D_001A428C + 0x1F8);
}
