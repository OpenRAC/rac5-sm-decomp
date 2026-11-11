void func_03A1A8(char *object, int mode)
{
    char *entry = *(char **)(object + 0x5A0);
    if (entry != 0) {
        int flags = *(int *)(entry + 0x64);
        *(int *)(entry + 0x64) =
            (flags & -33) | (((mode ^ 1) & 1) << 5);
    }
}
