extern int sprintf(char *buf, const char *fmt, ...);
extern int func_0DE958(char *buf, char *arg, int *out);
extern int GetBufferCachePtr__Fv(void);
extern unsigned int func_0DEB10(char *buf);
extern int D_00131510;
extern char D_0012DF38[];
extern char D_0012DF50[];
extern char D_0011707C[];

int func_130778(void)
{
    char buf1[0x20];
    char buf2[0x20];
    int x;
    int y;
    long h;

    sprintf(buf1, D_0012DF38, D_00131510);
    sprintf(buf2, D_0012DF50, D_00131510);
    h = func_0DE958(buf1, D_0011707C, 0);
    y = GetBufferCachePtr__Fv();
    if (y == 0)
        return 0;
    if (func_0DEB10(buf2) < 0x1A9000) {
        func_0DE958(buf2, (char *)&x, &y);
        return h != 0;
    }
    return 1;
}
