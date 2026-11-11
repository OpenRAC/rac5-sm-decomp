extern int func_134B70(void *container);

struct Container {
    char *base;
    int count;
};

void *func_134A40(struct Container *container, int index)
{
    int item_offset;
    char *base;
    if (index == 0)
        return 0;
    if (func_134B70(container) == 0)
        return 0;
    if (index > container->count)
        return 0;
    item_offset = index * 8;
    base = container->base;
    return *(void **)(base + item_offset + 12);
}
