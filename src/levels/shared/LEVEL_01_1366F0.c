/* LEVEL_01:0x1366F0 -- clears two words of the object's child block and returns 1. */
int func_1366F0(char *object)
{
    char *child;

    child = *(char **)(object + 0x58);
    *(int *)(child + 0x54) = 0;
    *(int *)(child + 0x58) = 0;
    return 1;
}
