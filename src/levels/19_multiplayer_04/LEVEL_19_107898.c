extern int sprintf(char *buf, const char *fmt, ...);
extern int func_1072B0(char *buf, char *arg, int *out);
extern int GetBufferCachePtr__Fv(void);
extern unsigned int func_107468(char *buf);
extern int D_001D16A0;
extern char D_001CE0C8[];
extern char D_001CE0E0[];
extern char D_001B5B1C[];

int func_130778(void)
{
    char buf1[0x20];
    char buf2[0x20];
    int x;
    int y;
    long h;

    sprintf(buf1, D_001CE0C8, D_001D16A0);
    sprintf(buf2, D_001CE0E0, D_001D16A0);
    h = func_1072B0(buf1, D_001B5B1C, 0);
    y = GetBufferCachePtr__Fv();
    if (y == 0)
        return 0;
    if (func_107468(buf2) < 0x1A9000) {
        func_1072B0(buf2, (char *)&x, &y);
        return h != 0;
    }
    return 1;
}
