void func_06AFD8(char *object, int first, int second, int third)
{
    *(int *)(object + 0x380) = first;
    *(int *)(object + 0x384) = second;
    *(int *)(object + 0x38C) = third;
}
