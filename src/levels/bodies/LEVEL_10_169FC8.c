void func_169FC8(char *object)
{
    char *child = *(char **)(object + 0x58);
    *(unsigned char *)(child + 0x20) = 0;
    *(unsigned char *)(child + 0x21) = 0;
    *(unsigned char *)(child + 0x22) = 0;
    *(unsigned char *)(child + 0x23) = 0;
    *(unsigned char *)(object + 0x45) = 1;
}
