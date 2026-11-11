/* LEVEL_20:0x08B678 -- placement copy of LEVEL_01_0B2618.c: zeroes a two-word entry of a 20-byte table when index is below four. */
extern char D_001994D8[];

void func_08B678(int index)
{
    int stride = 20;
    int outside = (index < 4) ^ 1;

    if (outside)
        return;
    *(int *)(D_001994D8 + index * stride) = 0;
    *(int *)(index * stride + D_001994D8 + 4) = 0;
}
