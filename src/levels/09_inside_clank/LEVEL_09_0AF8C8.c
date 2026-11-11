/* LEVEL_09:0x0AF8C8 -- placement copy of LEVEL_01_0B2618.c: zeroes a two-word entry of a 20-byte table when index is below four. */
extern char D_0030F108[];

void func_0AF8C8(int index)
{
    int stride = 20;
    int outside = (index < 4) ^ 1;

    if (outside)
        return;
    *(int *)(D_0030F108 + index * stride) = 0;
    *(int *)(index * stride + D_0030F108 + 4) = 0;
}
