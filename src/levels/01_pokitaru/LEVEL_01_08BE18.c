/* LEVEL_01:0x08BE18 -- removes an item from a compact pointer array. */
int func_08BE18(char *state, char *item)
{
    int *array;
    int slot = (signed char)item[4];
    int *place;
    int last;
    int *src;
    if (slot == -1)
        return 0;
    array = (int *)(state + 0x20);
    place = array + slot;
    if (*place != (int)item)
        return 0;
    last = *(int *)(state + 0x1c);
    last = last - 1;
    *(int *)(state + 0x1c) = last;
    src = array + last;
    *place = *src;
    item[4] = -1;
    return 1;
}
