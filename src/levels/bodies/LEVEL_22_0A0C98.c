/* LEVEL_22:0x0A0C98 -- placement copy of LEVEL_01_0B2618.c: zeroes a two-word entry of a 20-byte table when index is below four. */
extern char D_0027D558[];

void func_0A0C98(int index)
{
    int stride = 20;
    int outside = (index < 4) ^ 1;

    if (outside)
        return;
    *(int *)(D_0027D558 + index * stride) = 0;
    *(int *)(index * stride + D_0027D558 + 4) = 0;
}
