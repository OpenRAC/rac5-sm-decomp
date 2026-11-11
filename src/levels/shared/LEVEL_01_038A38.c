int func_038A38(char *object)
{
    short kind = *(short *)(object + 0x100);
    return kind == 0x21 || kind == 0x39;
}
