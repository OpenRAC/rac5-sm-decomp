/* LEVEL_08:0x0BD248 -- placement copy of LEVEL_01_0B2618.c: zeroes a two-word entry of a 20-byte table when index is below four. */
extern char D_00376C08[];

void func_0BD248(int index)
{
    int stride = 20;
    int outside = (index < 4) ^ 1;

    if (outside)
        return;
    *(int *)(D_00376C08 + index * stride) = 0;
    *(int *)(index * stride + D_00376C08 + 4) = 0;
}
