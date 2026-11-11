extern int func_0E17D8(void *container);

struct Container {
    char *base;
    int count;
};

void *func_0E16A8(struct Container *container, int index)
{
    int item_offset;
    char *base;
    if (index == 0)
        return 0;
    if (func_0E17D8(container) == 0)
        return 0;
    if (index > container->count)
        return 0;
    item_offset = index * 8;
    base = container->base;
    return *(void **)(base + item_offset + 12);
}
