int func_17AC98(char *object)
{
    unsigned char *text = *(unsigned char **)(object + 0x58) + 0xC4;
    unsigned int i = 0;
    do {
        if (text[i] == 0)
            return i;
        i++;
    } while (i < 3);
    return -1;
}
