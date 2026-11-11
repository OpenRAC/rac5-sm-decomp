void func_1B6440(char *object, int index)
{
    int stride = 0x14;
    char *table = *(char **)(object + 0x58);
    int offset = index * stride;
    *(int *)(table + offset + 4) = -1;
}
