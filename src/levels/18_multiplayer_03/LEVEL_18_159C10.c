int func_159C10(char *object)
{
    char *child = *(char **)(object + 0x58);
    unsigned int i;
    for (i = 0; i < 3; i++) {
        if (*(int *)(child + 0x48 + i * 0x74) == 0)
            return 0;
    }
    return 1;
}
