extern int strncmp(const char *, const char *, unsigned int);
extern int D_0020C5F8;
extern char D_00225938[];

int func_025308(char *param_1)
{
    if (strncmp(param_1, (char *)D_0020C5F8, 0x80) != 0) {
        if (strncmp(param_1, D_00225938, 4) != 0)
            return 0;
        return 0xC350;
    }
    return 0x20C;
}
