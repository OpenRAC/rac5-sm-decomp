void func_1DBA08(char *object)
{
    char *child = *(char **)(object + 0x54);
    *(int *)(child + 4) = 0;
    *(int *)(child + 8) = 0;
    *(int *)(child + 0xC) = 0;
    *(unsigned char *)(object + 0x46) = 1;
}
