extern int strncmp(const char *, const char *, unsigned int);
extern int D_001DDD78;
extern char D_001F6638[];

int func_024730(char *param_1)
{
    if (strncmp(param_1, (char *)D_001DDD78, 0x80) != 0) {
        if (strncmp(param_1, D_001F6638, 4) != 0)
            return 0;
        return 0xC350;
    }
    return 0x20C;
}
