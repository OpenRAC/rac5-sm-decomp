void func_1F0B30(char *object)
{
    *(int *)object = 0;
    *(short *)(object + 4) = 0;
    *(short *)(object + 6) = 0;
    *(int *)(object + 8) = 0;
}
