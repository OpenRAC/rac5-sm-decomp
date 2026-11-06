extern int sprintf(char *buf, const char *fmt, ...);
extern int func_12CD88(char *buf, char *arg, int *out);
extern int GetBufferCachePtr__Fv(void);
extern unsigned int func_12CF40(char *buf);
extern int D_0022F4F0;
extern char D_0022CCF8[];
extern char D_0022CD10[];
extern char D_0021B18C[];

int func_130778(void)
{
    char buf1[0x20];
    char buf2[0x20];
    int x;
    int y;
    long h;

    sprintf(buf1, D_0022CCF8, D_0022F4F0);
    sprintf(buf2, D_0022CD10, D_0022F4F0);
    h = func_12CD88(buf1, D_0021B18C, 0);
    y = GetBufferCachePtr__Fv();
    if (y == 0)
        return 0;
    if (func_12CF40(buf2) < 0x1A9000) {
        func_12CD88(buf2, (char *)&x, &y);
        return h != 0;
    }
    return 1;
}
