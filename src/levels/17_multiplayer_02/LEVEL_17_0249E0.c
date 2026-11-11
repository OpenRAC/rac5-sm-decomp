extern char *D_001950B8;

unsigned char func_0249E0(int index, unsigned char mask)
{
    return *(unsigned char *)(D_001950B8 + index + 0xc00) & mask;
}
