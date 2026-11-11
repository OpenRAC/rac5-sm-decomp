extern int sprintf(char *buf, const char *fmt, ...);
extern int func_136208(char *buf, char *arg, int *out);
extern int GetBufferCachePtr__Fv(void);
extern unsigned int func_1363C0(char *buf);
extern int D_00234170;
extern char D_00231978[];
extern char D_00231990[];
extern char D_002202AC[];

int func_130778(void)
{
    char buf1[0x20];
    char buf2[0x20];
    int x;
    int y;
    long h;

    sprintf(buf1, D_00231978, D_00234170);
    sprintf(buf2, D_00231990, D_00234170);
    h = func_136208(buf1, D_002202AC, 0);
    y = GetBufferCachePtr__Fv();
    if (y == 0)
        return 0;
    if (func_1363C0(buf2) < 0x1A9000) {
        func_136208(buf2, (char *)&x, &y);
        return h != 0;
    }
    return 1;
}
