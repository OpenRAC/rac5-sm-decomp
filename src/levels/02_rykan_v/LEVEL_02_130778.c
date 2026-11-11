extern int sprintf(char *buf, const char *fmt, ...);
extern int func_130138(char *buf, char *arg, int *out);
extern int GetBufferCachePtr__Fv(void);
extern unsigned int func_1302F0(char *buf);
extern int D_0022F770;
extern char D_0022CF78[];
extern char D_0022CF90[];
extern char D_0021BE4C[];

int func_130778(void)
{
    char buf1[0x20];
    char buf2[0x20];
    int x;
    int y;
    long h;

    sprintf(buf1, D_0022CF78, D_0022F770);
    sprintf(buf2, D_0022CF90, D_0022F770);
    h = func_130138(buf1, D_0021BE4C, 0);
    y = GetBufferCachePtr__Fv();
    if (y == 0)
        return 0;
    if (func_1302F0(buf2) < 0x1A9000) {
        func_130138(buf2, (char *)&x, &y);
        return h != 0;
    }
    return 1;
}
