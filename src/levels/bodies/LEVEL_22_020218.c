extern int strncmp(const char *, const char *, unsigned int);
extern int D_001532F8;
extern char D_00169EB8[];

int func_020218(char *param_1)
{
    if (strncmp(param_1, (char *)D_001532F8, 0x80) != 0) {
        if (strncmp(param_1, D_00169EB8, 4) != 0)
            return 0;
        return 0xC350;
    }
    return 0x20C;
}
