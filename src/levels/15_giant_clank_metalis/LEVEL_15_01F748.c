extern int strncmp(const char *, const char *, unsigned int);
extern int D_00148BF8;
extern char D_001611B8[];

int func_01F748(char *param_1)
{
    if (strncmp(param_1, (char *)D_00148BF8, 0x80) != 0) {
        if (strncmp(param_1, D_001611B8, 4) != 0)
            return 0;
        return 0xC350;
    }
    return 0x20C;
}
