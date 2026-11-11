extern int sprintf(char *buf, const char *fmt, ...);
extern int func_11F888(char *buf, char *arg, int *out);
extern int GetBufferCachePtr__Fv(void);
extern unsigned int func_11FA40(char *buf);
extern int D_001EB570;
extern char D_001E8D78[];
extern char D_001E8D90[];
extern char D_001D7B0C[];

int func_130778(void)
{
    char buf1[0x20];
    char buf2[0x20];
    int x;
    int y;
    long h;

    sprintf(buf1, D_001E8D78, D_001EB570);
    sprintf(buf2, D_001E8D90, D_001EB570);
    h = func_11F888(buf1, D_001D7B0C, 0);
    y = GetBufferCachePtr__Fv();
    if (y == 0)
        return 0;
    if (func_11FA40(buf2) < 0x1A9000) {
        func_11F888(buf2, (char *)&x, &y);
        return h != 0;
    }
    return 1;
}
