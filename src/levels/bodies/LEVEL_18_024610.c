extern char *D_001A2F38;

unsigned char func_024610(int index, unsigned char mask)
{
    return *(unsigned char *)(D_001A2F38 + index + 0xc00) & mask;
}
