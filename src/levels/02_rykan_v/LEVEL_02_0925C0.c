extern char *D_00256534;
extern char *D_0020B234;

char *func_0925C0(unsigned int index, int enabled)
{
    if (enabled != 0) {
        char *lookup = *(char **)(D_00256534 + 0x14);
        if (lookup != 0)
            index = (unsigned char)lookup[index];
    }
    return D_0020B234 + index * 0x40;
}
