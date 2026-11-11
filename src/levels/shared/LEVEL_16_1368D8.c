void func_1368D8(char *object)
{
    char *child = *(char **)(object + 0x58);
    if (*(unsigned char *)(child + 0x2C) != 0) {
        *(int *)(child + 0x28) = 0;
        *(unsigned char *)(child + 0x2C) = 0;
    }
}
