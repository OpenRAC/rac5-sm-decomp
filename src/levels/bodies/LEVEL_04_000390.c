extern unsigned char *D_0020D12C;

unsigned int func_000390(int index, unsigned int bit)
{
    if (index == 0)
        return 1;
    return (D_0020D12C[index + 0x859] >> bit) & 1u;
}
