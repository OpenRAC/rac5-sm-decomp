extern int strncmp(const char *, const char *, unsigned int);
extern int D_00208BF8;
extern char D_002219B8[];

int func_025D98(char *param_1)
{
    if (strncmp(param_1, (char *)D_00208BF8, 0x80) != 0) {
        if (strncmp(param_1, D_002219B8, 4) != 0)
            return 0;
        return 0xC350;
    }
    return 0x20C;
}
