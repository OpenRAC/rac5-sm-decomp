extern int sprintf(char *buf, const char *fmt, ...);
extern int func_1009D0(char *buf, char *arg, int *out);
extern int GetBufferCachePtr__Fv(void);
extern unsigned int func_100B88(char *buf);
extern int D_00177C70;
extern char D_00175478[];
extern char D_00175490[];
extern char D_00165E6C[];

int func_130778(void)
{
    char buf1[0x20];
    char buf2[0x20];
    int x;
    int y;
    long h;

    sprintf(buf1, D_00175478, D_00177C70);
    sprintf(buf2, D_00175490, D_00177C70);
    h = func_1009D0(buf1, D_00165E6C, 0);
    y = GetBufferCachePtr__Fv();
    if (y == 0)
        return 0;
    if (func_100B88(buf2) < 0x1A9000) {
        func_1009D0(buf2, (char *)&x, &y);
        return h != 0;
    }
    return 1;
}
