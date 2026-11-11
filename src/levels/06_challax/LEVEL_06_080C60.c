extern char *D_001E515C;

void func_080C60(unsigned int value)
{
    *(unsigned int *)(D_001E515C + 0x100) =
        value & *(unsigned int *)(D_001E515C + 0x1F8);
}
