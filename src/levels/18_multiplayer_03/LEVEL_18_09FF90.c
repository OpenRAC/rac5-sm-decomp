/* LEVEL_18:0x09FF90 -- placement copy of LEVEL_01_0B2618.c: zeroes a two-word entry of a 20-byte table when index is below four. */
extern char D_00276018[];

void func_09FF90(int index)
{
    int stride = 20;
    int outside = (index < 4) ^ 1;

    if (outside)
        return;
    *(int *)(D_00276018 + index * stride) = 0;
    *(int *)(index * stride + D_00276018 + 4) = 0;
}
