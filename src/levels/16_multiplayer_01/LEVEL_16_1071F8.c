extern int sprintf(char *buf, const char *fmt, ...);
extern int func_106C10(char *buf, char *arg, int *out);
extern int GetBufferCachePtr__Fv(void);
extern unsigned int func_106DC8(char *buf);
extern int D_001D04A0;
extern char D_001CCEC8[];
extern char D_001CCEE0[];
extern char D_001B499C[];

int func_130778(void)
{
    char buf1[0x20];
    char buf2[0x20];
    int x;
    int y;
    long h;

    sprintf(buf1, D_001CCEC8, D_001D04A0);
    sprintf(buf2, D_001CCEE0, D_001D04A0);
    h = func_106C10(buf1, D_001B499C, 0);
    y = GetBufferCachePtr__Fv();
    if (y == 0)
        return 0;
    if (func_106DC8(buf2) < 0x1A9000) {
        func_106C10(buf2, (char *)&x, &y);
        return h != 0;
    }
    return 1;
}
