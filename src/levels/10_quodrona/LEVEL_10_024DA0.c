extern int strncmp(const char *, const char *, unsigned int);
extern int D_001FCF78;
extern char D_002159B8[];

int func_024DA0(char *param_1)
{
    if (strncmp(param_1, (char *)D_001FCF78, 0x80) != 0) {
        if (strncmp(param_1, D_002159B8, 4) != 0)
            return 0;
        return 0xC350;
    }
    return 0x20C;
}
