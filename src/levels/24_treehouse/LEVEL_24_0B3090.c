/* LEVEL_24.REL:0x0B3090: write a byte to a selected 0x30-byte slot. */
int func_0B3090(int *set, unsigned int index, int slot, int value)
{
    int item;
    unsigned int stride;
    if (index >= (unsigned int)set[1])
        return 0;
    item = *(int *)(index * 4U + (unsigned int)set[0]);
    stride = (unsigned int)slot * 0x30U;
    *(char *)((unsigned int)item + stride + 0x24U) = value;
    return 1;
}
