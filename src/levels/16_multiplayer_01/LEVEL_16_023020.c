extern int strncmp(const char *, const char *, unsigned int);
extern int D_001A1A80;
extern char D_001C1A18[];

int func_023020(char *param_1)
{
    if (strncmp(param_1, (char *)D_001A1A80, 0x80) != 0) {
        if (strncmp(param_1, D_001C1A18, 4) != 0)
            return 0;
        return 0xC350;
    }
    return 0x20C;
}
