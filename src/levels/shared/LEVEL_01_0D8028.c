char *func_0D8028(char *object, unsigned int index)
{
    unsigned int count = *(unsigned int *)(object + 0x60);
    if (count == *(unsigned int *)(object + 0x64))
        return 0;
    if (index < count)
        return object + index * 12;
    return 0;
}
