extern int strncmp(const char *, const char *, unsigned int);
extern int D_001E32F8;
extern char D_001FB938[];

int func_0243D0(char *param_1)
{
    if (strncmp(param_1, (char *)D_001E32F8, 0x80) != 0) {
        if (strncmp(param_1, D_001FB938, 4) != 0)
            return 0;
        return 0xC350;
    }
    return 0x20C;
}
