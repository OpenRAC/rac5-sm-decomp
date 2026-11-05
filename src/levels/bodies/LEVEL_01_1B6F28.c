int func_1B6F28(unsigned char *object)
{
    unsigned char *text = *(unsigned char **)(object + 0x58) + 0x84;
    unsigned int index = 0;
    do {
        if (text[index] == 0)
            return 0;
        index++;
    } while (index < 5);
    return 1;
}
