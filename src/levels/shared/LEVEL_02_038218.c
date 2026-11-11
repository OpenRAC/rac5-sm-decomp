int func_038218(char *object, const int *values, unsigned int count)
{
    char *child = *(char **)(object + 0x40);
    int kind = *(int *)(child + 0x24);
    unsigned int i;
    for (i = 0; i < count; i++) {
        if (kind == values[i])
            return 0;
    }
    return 1;
}
