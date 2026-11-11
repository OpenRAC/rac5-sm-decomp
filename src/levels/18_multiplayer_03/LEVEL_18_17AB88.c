int func_17AB88(char *object)
{
    char *child = *(char **)(object + 0x54);
    unsigned char state = *(unsigned char *)(object + 0x45);
    int result = *(unsigned char *)(child + 0x36) != 0;
    if (state == 13)
        result |= 1;
    return result;
}
