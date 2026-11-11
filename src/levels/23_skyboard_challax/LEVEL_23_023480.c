extern int strncmp(const char *, const char *, unsigned int);
extern int D_001C7378;
extern char D_001DFBB8[];

int func_023480(char *param_1)
{
    if (strncmp(param_1, (char *)D_001C7378, 0x80) != 0) {
        if (strncmp(param_1, D_001DFBB8, 4) != 0)
            return 0;
        return 0xC350;
    }
    return 0x20C;
}
