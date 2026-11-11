extern char *D_00148D34;
extern char *D_00106984;

char *func_06AEE0(unsigned int index, int enabled)
{
    if (enabled != 0) {
        char *lookup = *(char **)(D_00148D34 + 0x14);
        if (lookup != 0)
            index = (unsigned char)lookup[index];
    }
    return D_00106984 + index * 0x40;
}
