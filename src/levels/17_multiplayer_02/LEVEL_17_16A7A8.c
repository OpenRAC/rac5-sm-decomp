void func_16A7A8(char *object, int value)
{
    char *child = *(char **)(object + 0x58);
    if (*(int *)(child + 4) == value) {
        *(int *)(child + 4) = 0;
        return;
    }
    if (*(int *)(child + 8) == value)
        *(int *)(child + 8) = 0;
}
