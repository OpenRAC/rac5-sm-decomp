int func_1F4B58(int *values, int sought)
{
    unsigned int count = *(unsigned char *)((char *)values + 0x28);
    unsigned int i;
    for (i = 0; i < count; i++) {
        if (sought == values[i])
            return 1;
    }
    return 0;
}
