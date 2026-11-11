int func_1599A8(char *object, unsigned int value)
{
    char *child = *(char **)(object + 0x58);
    unsigned int i;
    for (i = 0; i < 2; i++) {
        if (value < *(unsigned int *)(child + 0xE0 + i * 0xEC))
            return 1;
    }
    return 0;
}
