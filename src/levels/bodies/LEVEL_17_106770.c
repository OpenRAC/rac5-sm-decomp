extern int sprintf(char *buf, const char *fmt, ...);
extern int func_106188(char *buf, char *arg, int *out);
extern int GetBufferCachePtr__Fv(void);
extern unsigned int func_106340(char *buf);
extern int D_001C3920;
extern char D_001C0348[];
extern char D_001C0360[];
extern char D_001A7F9C[];

int func_130778(void)
{
    char buf1[0x20];
    char buf2[0x20];
    int x;
    int y;
    long h;

    sprintf(buf1, D_001C0348, D_001C3920);
    sprintf(buf2, D_001C0360, D_001C3920);
    h = func_106188(buf1, D_001A7F9C, 0);
    y = GetBufferCachePtr__Fv();
    if (y == 0)
        return 0;
    if (func_106340(buf2) < 0x1A9000) {
        func_106188(buf2, (char *)&x, &y);
        return h != 0;
    }
    return 1;
}
