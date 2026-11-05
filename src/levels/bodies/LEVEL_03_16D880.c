int func_16D880(char *object)
{
    char *child = *(char **)(object + 0x54);
    char *member = *(char **)(child + 0x30);
    if ((*(unsigned int *)(member + 0x64) & 6u) != 0) {
        *(int *)(child + 0x1C) = 0;
        *(int *)(child + 0x24) = 0;
        *(int *)(child + 0x20) = 0;
        *(int *)(child + 8) = 0;
        *(int *)(child + 0xC) = 0;
        *(unsigned char *)(object + 0x45) = 3;
        return 1;
    }
    return 0;
}
