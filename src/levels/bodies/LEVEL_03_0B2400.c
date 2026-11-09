/* LEVEL_03:0x0B2400 -- placement copy of LEVEL_01_0B2618.c: zeroes a two-word entry of a 20-byte table when index is below four. */
extern char D_00342818[];

void func_0B2400(int index)
{
    int stride = 20;
    int outside = (index < 4) ^ 1;

    if (outside)
        return;
    *(int *)(D_00342818 + index * stride) = 0;
    *(int *)(index * stride + D_00342818 + 4) = 0;
}
