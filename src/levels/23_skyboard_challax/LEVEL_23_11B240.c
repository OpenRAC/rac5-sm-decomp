extern int sprintf(char *buf, const char *fmt, ...);
extern int func_11AC00(char *buf, char *arg, int *out);
extern int GetBufferCachePtr__Fv(void);
extern unsigned int func_11ADB8(char *buf);
extern int D_001ED970;
extern char D_001EB178[];
extern char D_001EB190[];
extern char D_001DA28C[];

int func_130778(void)
{
    char buf1[0x20];
    char buf2[0x20];
    int x;
    int y;
    long h;

    sprintf(buf1, D_001EB178, D_001ED970);
    sprintf(buf2, D_001EB190, D_001ED970);
    h = func_11AC00(buf1, D_001DA28C, 0);
    y = GetBufferCachePtr__Fv();
    if (y == 0)
        return 0;
    if (func_11ADB8(buf2) < 0x1A9000) {
        func_11AC00(buf2, (char *)&x, &y);
        return h != 0;
    }
    return 1;
}
