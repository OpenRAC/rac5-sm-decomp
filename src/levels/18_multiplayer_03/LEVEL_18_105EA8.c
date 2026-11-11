extern int sprintf(char *buf, const char *fmt, ...);
extern int func_1058C0(char *buf, char *arg, int *out);
extern int GetBufferCachePtr__Fv(void);
extern unsigned int func_105A78(char *buf);
extern int D_001D1A20;
extern char D_001CE448[];
extern char D_001CE460[];
extern char D_001B5E1C[];

int func_130778(void)
{
    char buf1[0x20];
    char buf2[0x20];
    int x;
    int y;
    long h;

    sprintf(buf1, D_001CE448, D_001D1A20);
    sprintf(buf2, D_001CE460, D_001D1A20);
    h = func_1058C0(buf1, D_001B5E1C, 0);
    y = GetBufferCachePtr__Fv();
    if (y == 0)
        return 0;
    if (func_105A78(buf2) < 0x1A9000) {
        func_1058C0(buf2, (char *)&x, &y);
        return h != 0;
    }
    return 1;
}
