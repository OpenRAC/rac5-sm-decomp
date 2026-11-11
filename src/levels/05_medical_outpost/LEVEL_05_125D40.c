extern int sprintf(char *buf, const char *fmt, ...);
extern int func_125700(char *buf, char *arg, int *out);
extern int GetBufferCachePtr__Fv(void);
extern unsigned int func_1258B8(char *buf);
extern int D_002096F0;
extern char D_00206EF8[];
extern char D_00206F10[];
extern char D_001F5F0C[];

int func_130778(void)
{
    char buf1[0x20];
    char buf2[0x20];
    int x;
    int y;
    long h;

    sprintf(buf1, D_00206EF8, D_002096F0);
    sprintf(buf2, D_00206F10, D_002096F0);
    h = func_125700(buf1, D_001F5F0C, 0);
    y = GetBufferCachePtr__Fv();
    if (y == 0)
        return 0;
    if (func_1258B8(buf2) < 0x1A9000) {
        func_125700(buf2, (char *)&x, &y);
        return h != 0;
    }
    return 1;
}
