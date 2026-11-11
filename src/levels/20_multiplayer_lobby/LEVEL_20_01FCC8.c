extern int strncmp(const char *, const char *, unsigned int);
extern int D_00104160;
extern char D_00122A98[];

int func_01FCC8(char *param_1)
{
    if (strncmp(param_1, (char *)D_00104160, 0x80) != 0) {
        if (strncmp(param_1, D_00122A98, 4) != 0)
            return 0;
        return 0xC350;
    }
    return 0x20C;
}
