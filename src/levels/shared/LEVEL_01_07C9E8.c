unsigned char func_07C9E8(unsigned char *object)
{
    unsigned int index = object[0x44];
    char *component = *(char **)(object + 0x40);
    char *table = *(char **)(component + 4);
    char *entry = *(char **)(table + index * 0x34 + 8);
    return entry[8];
}
