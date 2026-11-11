void func_18E7D0(char *object, int enabled)
{
    char *child = *(char **)(object + 0x58);
    if (enabled != 0)
        *(unsigned short *)(child + 0xC) |= 8u;
    else
        *(unsigned short *)(child + 0xC) &= ~8u;
}
