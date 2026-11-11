/* LEVEL_01:0x03BF08 -- placement copy of LEVEL_02_040E20.c. */
void func_03BF08(char *object, int mode)
{
    char *entry = *(char **)(object + 0x5A0);
    if (entry != 0) {
        int flags = *(int *)(entry + 0x64);
        *(int *)(entry + 0x64) =
            (flags & -33) | (((mode ^ 1) & 1) << 5);
    }
}
