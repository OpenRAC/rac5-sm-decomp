void func_029480(char *object, int first, int second, unsigned char state)
{
    *(unsigned char *)(object + 0x16) = state;
    *(int *)(object + 4) = first;
    *(int *)(object + 8) = second;
    *(int *)object = 0;
}
