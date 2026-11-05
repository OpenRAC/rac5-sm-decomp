unsigned int func_0D8EB0(char *object)
{
    unsigned int state = *(unsigned int *)(object + 4);
    if (state == 1)
        return 0;
    if (state > 3)
        return *(unsigned int *)(object + 8) >> 1;
    return *(unsigned int *)(object + 0x0C);
}
