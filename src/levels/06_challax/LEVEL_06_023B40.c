extern int strncmp(const char *, const char *, unsigned int);
extern int D_001E2E78;
extern char D_001FB8B8[];

int func_023B40(char *param_1)
{
    if (strncmp(param_1, (char *)D_001E2E78, 0x80) != 0) {
        if (strncmp(param_1, D_001FB8B8, 4) != 0)
            return 0;
        return 0xC350;
    }
    return 0x20C;
}
