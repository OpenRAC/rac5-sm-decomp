extern char *D_001C6EDC;

void func_081088(unsigned int value)
{
    *(unsigned int *)(D_001C6EDC + 0x100) =
        value & *(unsigned int *)(D_001C6EDC + 0x1F8);
}
