void func_041060(char *object, int enabled)
{
    char *child = *(char **)(object + 0x59C);
    if (child != 0) {
        int *flags = (int *)(child + 0x64);
        *flags = (*flags & -2049) | (((enabled ^ 1) & 1) << 11);
    }
}
