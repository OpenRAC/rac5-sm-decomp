extern int strncmp(const char *, const char *, unsigned int);
extern int D_001F3F78;
extern char D_0020CA38[];

int func_025438(char *param_1)
{
    if (strncmp(param_1, (char *)D_001F3F78, 0x80) != 0) {
        if (strncmp(param_1, D_0020CA38, 4) != 0)
            return 0;
        return 0xC350;
    }
    return 0x20C;
}
