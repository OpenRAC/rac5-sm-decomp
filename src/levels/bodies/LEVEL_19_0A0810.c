/* LEVEL_19:0x0A0810 -- placement copy of LEVEL_01_0B2618.c: zeroes a two-word entry of a 20-byte table when index is below four. */
extern char D_00275E18[];

void func_0A0810(int index)
{
    int stride = 20;
    int outside = (index < 4) ^ 1;

    if (outside)
        return;
    *(int *)(D_00275E18 + index * stride) = 0;
    *(int *)(index * stride + D_00275E18 + 4) = 0;
}
