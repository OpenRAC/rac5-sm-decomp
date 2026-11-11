extern char *D_002104B4;
extern char *D_001C9674;

char *func_081B50(unsigned int index, int enabled)
{
    if (enabled != 0) {
        char *lookup = *(char **)(D_002104B4 + 0x14);
        if (lookup != 0)
            index = (unsigned char)lookup[index];
    }
    return D_001C9674 + index * 0x40;
}
