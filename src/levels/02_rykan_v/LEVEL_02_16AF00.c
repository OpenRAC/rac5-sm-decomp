/* LEVEL_02:0x16AF00 -- stores a value into the nested record and a masked copy into the object. */
void func_16AF00(char *object, unsigned int value)
{
    char *nested = *(char **)(object + 0x54);
    *(unsigned int *)(nested + 0xC) = value;
    *(unsigned int *)(object + 0x6C) = value & 0xAAFFFFFF;
}
