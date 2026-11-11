void func_0381C8(char *object)
{
    char *child = *(char **)(object + 0x5DC);
    if (child != 0) {
        *(int *)(child + 0x64) &= -33;
        *(char **)(object + 0x5DC) = 0;
    }
}
