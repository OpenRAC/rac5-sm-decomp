extern int strncmp(const char *, const char *, unsigned int);
extern int D_00195080;
extern char D_001B4E98[];

int func_0229A0(char *param_1)
{
    if (strncmp(param_1, (char *)D_00195080, 0x80) != 0) {
        if (strncmp(param_1, D_001B4E98, 4) != 0)
            return 0;
        return 0xC350;
    }
    return 0x20C;
}
