extern char *D_0020B21C;

void func_08E718(unsigned int value)
{
    *(unsigned int *)(D_0020B21C + 0x100) =
        value & *(unsigned int *)(D_0020B21C + 0x1F8);
}
