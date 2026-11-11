extern int strncmp(const char *, const char *, unsigned int);
extern int D_00208278;
extern char D_00221738[];

int func_025A00(char *param_1)
{
    if (strncmp(param_1, (char *)D_00208278, 0x80) != 0) {
        if (strncmp(param_1, D_00221738, 4) != 0)
            return 0;
        return 0xC350;
    }
    return 0x20C;
}
