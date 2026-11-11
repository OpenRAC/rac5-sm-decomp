extern char *D_0028E2B4;
extern char *D_0023F134;

char *func_093DF8(unsigned int index, int enabled)
{
    if (enabled != 0) {
        char *lookup = *(char **)(D_0028E2B4 + 0x14);
        if (lookup != 0)
            index = (unsigned char)lookup[index];
    }
    return D_0023F134 + index * 0x40;
}
