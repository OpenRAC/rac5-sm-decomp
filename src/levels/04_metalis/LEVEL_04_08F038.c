extern char *D_00259834;
extern char *D_0020F734;

char * func_08F038(unsigned int index, int enabled)
{
    if (enabled != 0) {
        char *lookup = *(char **)(D_00259834 + 0x14);
        if (lookup != 0)
            index = (unsigned char)lookup[index];
    }
    return D_0020F734 + index * 0x40 + 0x30;
}
