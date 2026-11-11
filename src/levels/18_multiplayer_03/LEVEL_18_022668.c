extern int strncmp(const char *, const char *, unsigned int);
extern int D_001A2F00;
extern char D_001C2F98[];

int func_022668(char *param_1)
{
    if (strncmp(param_1, (char *)D_001A2F00, 0x80) != 0) {
        if (strncmp(param_1, D_001C2F98, 4) != 0)
            return 0;
        return 0xC350;
    }
    return 0x20C;
}
