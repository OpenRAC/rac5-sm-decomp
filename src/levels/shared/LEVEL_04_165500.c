void func_165500(char *object, unsigned char first, unsigned char second)
{
    unsigned char *bytes = *(unsigned char **)(object + 0x58);
    bytes[0] = first;
    bytes[1] = second;
    bytes[2] = 0;
}
