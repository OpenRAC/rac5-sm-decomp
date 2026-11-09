/* LEVEL_10:0x0B37F0 -- placement copy of LEVEL_01_0B2618.c: zeroes a two-word entry of a 20-byte table when index is below four. */
extern char D_00330D88[];

void func_0B37F0(int index)
{
    int stride = 20;
    int outside = (index < 4) ^ 1;

    if (outside)
        return;
    *(int *)(D_00330D88 + index * stride) = 0;
    *(int *)(index * stride + D_00330D88 + 4) = 0;
}
