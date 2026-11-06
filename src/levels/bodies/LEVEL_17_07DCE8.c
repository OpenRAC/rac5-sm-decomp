extern char *D_001E67B4;
extern char *D_001978A4;

char *func_07DCE8(unsigned int index, int enabled)
{
    if (enabled != 0) {
        char *lookup = *(char **)(D_001E67B4 + 0x14);
        if (lookup != 0)
            index = (unsigned char)lookup[index];
    }
    return D_001978A4 + index * 0x40;
}
