int func_163F38(char *object)
{
    char *child = *(char **)(object + 0x40);
    unsigned int kind = *(unsigned int *)(child + 0x24);
    return kind == 0x9412C3E8u || kind == 0x7C7A2E3Fu;
}
