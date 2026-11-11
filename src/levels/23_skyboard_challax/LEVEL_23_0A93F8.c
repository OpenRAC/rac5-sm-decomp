/* LEVEL_23:0x0A93F8 -- placement copy of LEVEL_01_0B2618.c: zeroes a two-word entry of a 20-byte table when index is below four. */
extern char D_002F8DD8[];

void func_0A93F8(int index)
{
    int stride = 20;
    int outside = (index < 4) ^ 1;

    if (outside)
        return;
    *(int *)(D_002F8DD8 + index * stride) = 0;
    *(int *)(index * stride + D_002F8DD8 + 4) = 0;
}
