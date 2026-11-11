int func_1B5408(char *object)
{
    char *child = *(char **)(object + 0x58);
    return *(int *)(child + 4) == 6;
}
