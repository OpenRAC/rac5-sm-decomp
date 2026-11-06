extern char *D_0022AEF4;
extern char *D_001E55F4;

char *func_0895E8(unsigned int index, int enabled)
{
    if (enabled != 0) {
        char *lookup = *(char **)(D_0022AEF4 + 0x14);
        if (lookup != 0)
            index = (unsigned char)lookup[index];
    }
    return D_001E55F4 + index * 0x40;
}
