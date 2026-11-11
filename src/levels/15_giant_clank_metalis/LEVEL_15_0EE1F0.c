extern int sprintf(char *buf, const char *fmt, ...);
extern int func_0EDC08(char *buf, char *arg, int *out);
extern int GetBufferCachePtr__Fv(void);
extern unsigned int func_0EDDC0(char *buf);
extern int D_0016EF70;
extern char D_0016C778[];
extern char D_0016C790[];
extern char D_0015B80C[];

int func_130778(void)
{
    char buf1[0x20];
    char buf2[0x20];
    int x;
    int y;
    long h;

    sprintf(buf1, D_0016C778, D_0016EF70);
    sprintf(buf2, D_0016C790, D_0016EF70);
    h = func_0EDC08(buf1, D_0015B80C, 0);
    y = GetBufferCachePtr__Fv();
    if (y == 0)
        return 0;
    if (func_0EDDC0(buf2) < 0x1A9000) {
        func_0EDC08(buf2, (char *)&x, &y);
        return h != 0;
    }
    return 1;
}
