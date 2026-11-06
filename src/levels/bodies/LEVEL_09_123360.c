extern int sprintf(char *buf, const char *fmt, ...);
extern int func_122D20(char *buf, char *arg, int *out);
extern int GetBufferCachePtr__Fv(void);
extern unsigned int func_122ED8(char *buf);
extern int D_002043F0;
extern char D_00201BF8[];
extern char D_00201C10[];
extern char D_001F098C[];

int func_130778(void)
{
    char buf1[0x20];
    char buf2[0x20];
    int x;
    int y;
    long h;

    sprintf(buf1, D_00201BF8, D_002043F0);
    sprintf(buf2, D_00201C10, D_002043F0);
    h = func_122D20(buf1, D_001F098C, 0);
    y = GetBufferCachePtr__Fv();
    if (y == 0)
        return 0;
    if (func_122ED8(buf2) < 0x1A9000) {
        func_122D20(buf2, (char *)&x, &y);
        return h != 0;
    }
    return 1;
}
