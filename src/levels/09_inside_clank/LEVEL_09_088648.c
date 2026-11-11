extern char *D_002267B4;
extern char *D_001E0074;

char *func_088648(unsigned int index, int enabled)
{
    if (enabled != 0) {
        char *lookup = *(char **)(D_002267B4 + 0x14);
        if (lookup != 0)
            index = (unsigned char)lookup[index];
    }
    return D_001E0074 + index * 0x40;
}
