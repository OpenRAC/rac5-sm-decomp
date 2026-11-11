/* LEVEL_24:0x0ABE90 -- placement copy of LEVEL_01_0B2618.c: zeroes a two-word entry of a 20-byte table when index is below four. */
extern char D_002F3848[];

void func_0ABE90(int index)
{
    int stride = 20;
    int outside = (index < 4) ^ 1;

    if (outside)
        return;
    *(int *)(D_002F3848 + index * stride) = 0;
    *(int *)(index * stride + D_002F3848 + 4) = 0;
}
