extern char *D_001A2C38;

unsigned char func_024C08(int index, unsigned char mask)
{
    return *(unsigned char *)(D_001A2C38 + index + 0xc00) & mask;
}
