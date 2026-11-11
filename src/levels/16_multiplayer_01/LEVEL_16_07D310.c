extern char *D_001F54B4;
extern char *D_001A42A4;

char * func_07D310(unsigned int index, int enabled)
{
    if (enabled != 0) {
        char *lookup = *(char **)(D_001F54B4 + 0x14);
        if (lookup != 0)
            index = (unsigned char)lookup[index];
    }
    return D_001A42A4 + index * 0x40 + 0x30;
}
