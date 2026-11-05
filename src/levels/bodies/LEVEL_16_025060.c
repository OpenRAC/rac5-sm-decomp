extern char *D_001A1AB8;

unsigned char func_025060(int index, unsigned char mask)
{
    return *(unsigned char *)(D_001A1AB8 + index + 0xc00) & mask;
}
