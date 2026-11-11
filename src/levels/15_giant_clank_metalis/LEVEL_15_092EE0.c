/* LEVEL_15:0x092EE0 -- placement copy of LEVEL_01_0B2618.c: zeroes a two-word entry of a 20-byte table when index is below four. */
extern char D_0023F9C8[];

void func_092EE0(int index)
{
    int stride = 20;
    int outside = (index < 4) ^ 1;

    if (outside)
        return;
    *(int *)(D_0023F9C8 + index * stride) = 0;
    *(int *)(index * stride + D_0023F9C8 + 4) = 0;
}
