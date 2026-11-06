extern int sprintf(char *buf, const char *fmt, ...);
extern int func_13B2C0(char *buf, char *arg, int *out);
extern int GetBufferCachePtr__Fv(void);
extern unsigned int func_13B478(char *buf);
extern int D_00264470;
extern char D_00261C78[];
extern char D_00261C90[];
extern char D_0024FD4C[];

int func_130778(void)
{
    char buf1[0x20];
    char buf2[0x20];
    int x;
    int y;
    long h;

    sprintf(buf1, D_00261C78, D_00264470);
    sprintf(buf2, D_00261C90, D_00264470);
    h = func_13B2C0(buf1, D_0024FD4C, 0);
    y = GetBufferCachePtr__Fv();
    if (y == 0)
        return 0;
    if (func_13B478(buf2) < 0x1A9000) {
        func_13B2C0(buf2, (char *)&x, &y);
        return h != 0;
    }
    return 1;
}
