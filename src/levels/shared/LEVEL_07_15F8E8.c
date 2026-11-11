int func_15F8E8(char *object)
{
    unsigned char state = *(unsigned char *)(object + 0x45);
    if (state == 0 || state == 4)
        return 1;
    return 0;
}
