unsigned int func_1C3388(char *object)
{
    int state = *(unsigned char *)(object + 0x45);
    if (state >= 25 && (state < 27 || state == 30))
        return 1;
    return (*(int *)(object + 0x64) >> 5) & 1;
}
