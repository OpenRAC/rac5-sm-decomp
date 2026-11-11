extern int strncmp(const char *, const char *, unsigned int);
extern int D_001C4BF8;
extern char D_001DD7B8[];

int func_0231B8(char *param_1)
{
    if (strncmp(param_1, (char *)D_001C4BF8, 0x80) != 0) {
        if (strncmp(param_1, D_001DD7B8, 4) != 0)
            return 0;
        return 0xC350;
    }
    return 0x20C;
}
