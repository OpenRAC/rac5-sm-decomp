extern int func_0C46F0(int *set, unsigned int index, int slot, int value);

int func_0c4790(int *set, unsigned int index, int slot, int a, int b, int c)
{
    int stride;

    if (index >= (unsigned int)set[1])
        return 0;
    stride = slot * 0x30;
    *(int *)(*(int *)(index * 4 + set[0]) + stride + 0x18) = a;
    *(int *)(*(int *)(index * 4 + set[0]) + stride + 0x1c) = b;
    *(int *)(*(int *)(index * 4 + set[0]) + stride + 0x20) = c;
    *(char *)(*(int *)(index * 4 + set[0]) + stride + 0x24) = 0;
    return func_0C46F0(set, index, slot, 1);
}
