unsigned int func_18BF08(char *object)
{
    unsigned int color = 0xCC0000FFu;
    if (*(unsigned char *)(object + 0x45) != 9)
        color = 0xCC00FFFFu;
    return color;
}
