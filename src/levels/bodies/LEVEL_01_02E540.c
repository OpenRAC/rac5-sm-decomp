void func_02E540(char *object)
{
    int sum = *(int *)(object + 0x18) +
        (*(int *)(object + 0x14) >> *(unsigned int *)(object + 0x1C));
    int limit = *(int *)(object + 0x20);
    if (sum >= limit)
        sum = limit;
    *(int *)(object + 0x24) = sum;
}
