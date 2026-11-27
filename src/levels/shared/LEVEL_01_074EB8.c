/* LEVEL_01:0x074EB8 -- returns whether the object context has a nonzero field unless blocked by flags. */
long long func_074EB8(char *object)
{
    char *context = *(char **)(object + 0x40);
    char *target = *(char **)(context + 0x10);
    long long result;
    int set;

    if ((*(unsigned int *)(target + 0x3c) & 2) != 0)
        return 0;
    result = 0;
    if (*(int *)(object + 0x48) != 0 && (*(unsigned int *)(object + 0x64) & 0x4000) == 0) {
        set = *(int *)(context + 0x20) != 0;
        result = set;
    }
    return result;
}
