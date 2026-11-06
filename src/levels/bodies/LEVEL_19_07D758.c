extern char *D_001F5634;
extern char *D_001A5424;

char *func_07D758(unsigned int index, int enabled)
{
    if (enabled != 0) {
        char *lookup = *(char **)(D_001F5634 + 0x14);
        if (lookup != 0)
            index = (unsigned char)lookup[index];
    }
    return D_001A5424 + index * 0x40;
}
