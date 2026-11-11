extern int strncmp(const char *, const char *, unsigned int);
extern int D_0020D0F8;
extern char D_002263B8[];

int func_0250B8(char *param_1)
{
    if (strncmp(param_1, (char *)D_0020D0F8, 0x80) != 0) {
        if (strncmp(param_1, D_002263B8, 4) != 0)
            return 0;
        return 0xC350;
    }
    return 0x20C;
}
