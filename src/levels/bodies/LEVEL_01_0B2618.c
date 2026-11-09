/* LEVEL_01:0x0B2618 -- zeroes a two-word entry of a 20-byte table when index is below four. */
extern char D_00327988[];

void func_0B2618(int index)
{
    int stride = 20;
    int outside = (index < 4) ^ 1;

    if (outside)
        return;
    *(int *)(D_00327988 + index * stride) = 0;
    *(int *)(index * stride + D_00327988 + 4) = 0;
}
