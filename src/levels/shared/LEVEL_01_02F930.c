int func_02F930(unsigned char *object, void *owner)
{
    unsigned char *target = *(unsigned char **)(object + 0x14);
    if (target != 0 && *(unsigned short *)(target + 0x14) != 2)
        return 0;
    object[0x29] = 0;
    object[0x28] = 2;
    return 1;
}
