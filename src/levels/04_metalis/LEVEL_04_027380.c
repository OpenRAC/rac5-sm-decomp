extern unsigned char *D_0020D12C;

unsigned char func_027380(unsigned int index)
{
    if (index >= 100)
        return 0;
    return (*(D_0020D12C + index + 0x1b60) >> 1) & 1u;
}
