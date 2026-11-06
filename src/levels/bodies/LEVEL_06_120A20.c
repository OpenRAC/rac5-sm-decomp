extern int sprintf(char *buf, const char *fmt, ...);
extern int func_1203E0(char *buf, char *arg, int *out);
extern int GetBufferCachePtr__Fv(void);
extern unsigned int func_120598(char *buf);
extern int D_00209670;
extern char D_00206E78[];
extern char D_00206E90[];
extern char D_001F5A8C[];

int func_130778(void)
{
    char buf1[0x20];
    char buf2[0x20];
    int x;
    int y;
    long h;

    sprintf(buf1, D_00206E78, D_00209670);
    sprintf(buf2, D_00206E90, D_00209670);
    h = func_1203E0(buf1, D_001F5A8C, 0);
    y = GetBufferCachePtr__Fv();
    if (y == 0)
        return 0;
    if (func_120598(buf2) < 0x1A9000) {
        func_1203E0(buf2, (char *)&x, &y);
        return h != 0;
    }
    return 1;
}
