typedef unsigned int u32;

int func_0B99C8(char *table, u32 index, int first, int second)
{
    if (index >= *(u32 *)(table + 4))
        return 0;
    (*(char **)(*(char **)table + index * 4))[0xCC] = first;
    (*(char **)(*(char **)table + index * 4))[0xCD] = second;
    return 1;
}
