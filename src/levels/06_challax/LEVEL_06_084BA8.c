extern char *D_0022BDB4;
extern char *D_001E5174;

char * func_084BA8(unsigned int index, int enabled)
{
    if (enabled != 0) {
        char *lookup = *(char **)(D_0022BDB4 + 0x14);
        if (lookup != 0)
            index = (unsigned char)lookup[index];
    }
    return D_001E5174 + index * 0x40 + 0x30;
}
