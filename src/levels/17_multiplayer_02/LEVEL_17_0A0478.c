/* LEVEL_17:0x0A0478 -- placement copy of LEVEL_01_0B2618.c: zeroes a two-word entry of a 20-byte table when index is below four. */
extern char D_00266F98[];

void func_0A0478(int index)
{
    int stride = 20;
    int outside = (index < 4) ^ 1;

    if (outside)
        return;
    *(int *)(D_00266F98 + index * stride) = 0;
    *(int *)(index * stride + D_00266F98 + 4) = 0;
}
