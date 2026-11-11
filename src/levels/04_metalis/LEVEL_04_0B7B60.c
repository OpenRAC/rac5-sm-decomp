/* LEVEL_04:0x0B7B60 -- placement copy of LEVEL_01_0B2618.c: zeroes a two-word entry of a 20-byte table when index is below four. */
extern char D_00342188[];

void func_0B7B60(int index)
{
    int stride = 20;
    int outside = (index < 4) ^ 1;

    if (outside)
        return;
    *(int *)(D_00342188 + index * stride) = 0;
    *(int *)(index * stride + D_00342188 + 4) = 0;
}
