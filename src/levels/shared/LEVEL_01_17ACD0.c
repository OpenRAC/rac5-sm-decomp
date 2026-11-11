int func_17ACD0(char *object)
{
    unsigned char *text = *(unsigned char **)(object + 0x58) + 0xC4;
    unsigned int i;
    unsigned int found = 0;
    for (i = 0; i < 3; ++i) {
        if (text[i] == 0)
            found++;
    }
    return found != 0;
}
