extern char *D_001E55DC;

void func_085740(unsigned int value)
{
    *(unsigned int *)(D_001E55DC + 0x100) =
        value & *(unsigned int *)(D_001E55DC + 0x1F8);
}
