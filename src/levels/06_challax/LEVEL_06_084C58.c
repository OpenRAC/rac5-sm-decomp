int func_084C58(char *owner, char *item)
{
    int index = *(signed char *)(item + 4);
    int *slots;
    int *slot;
    int *last;
    int count;

    if (index == -1)
        return 0;
    slots = (int *)(owner + 0x20);
    slot = slots + index;
    if (*slot != (int)item)
        return 0;
    count = *(int *)(owner + 0x1C) - 1;
    *(int *)(owner + 0x1C) = count;
    last = slots + count;
    *slot = *last;
    item[4] = -1;
    return 1;
}
