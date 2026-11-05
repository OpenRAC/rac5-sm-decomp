extern char *D_00104198;

unsigned char func_021BD8(int index, unsigned char mask)
{
    return *(unsigned char *)(D_00104198 + index + 0xc00) & mask;
}
