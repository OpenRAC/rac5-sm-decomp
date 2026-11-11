void func_03C270(char *object)
{
    char *child = *(char **)(object + 0x5E4);
    if (child != 0) {
        *(int *)(child + 0x64) &= -33;
        *(char **)(object + 0x5E4) = 0;
    }
}
