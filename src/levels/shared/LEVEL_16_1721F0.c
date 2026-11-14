/* LEVEL_16:0x1721F0 -- clears two words of the object's attached record and returns 1. */
int func_1721F0(char *object)
{
    char *child = *(char **)(object + 0x54);
    *(int *)(child + 0xC) = 0;
    *(int *)(child + 0x8) = 0;
    return 1;
}
