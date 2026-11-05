void func_196098(char *object, int first, int second)
{
    char *child = *(char **)(object + 0x58);
    if (*(int *)(child + 0xC) == 0) {
        *(int *)(child + 8) = second;
        *(int *)(child + 0xC) = first;
        *(int *)(object + 0x64) &= -1025;
    }
}
