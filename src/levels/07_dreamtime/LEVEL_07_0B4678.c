/* LEVEL_07:0x0B4678 -- placement copy of LEVEL_01_0B2618.c: zeroes a two-word entry of a 20-byte table when index is below four. */
extern char D_0033D288[];

void func_0B4678(int index)
{
    int stride = 20;
    int outside = (index < 4) ^ 1;

    if (outside)
        return;
    *(int *)(D_0033D288 + index * stride) = 0;
    *(int *)(index * stride + D_0033D288 + 4) = 0;
}
