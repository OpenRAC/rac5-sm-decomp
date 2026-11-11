extern int func_01F338(void *container);

struct Container {
    char *base;
    int count;
};

void *func_01F208(struct Container *container, int index)
{
    int item_offset;
    char *base;
    if (index == 0)
        return 0;
    if (func_01F338(container) == 0)
        return 0;
    if (index > container->count)
        return 0;
    item_offset = index * 8;
    base = container->base;
    return *(void **)(base + item_offset + 12);
}
