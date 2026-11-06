extern int sprintf(char *buf, const char *fmt, ...);
extern int func_127BE8(char *buf, char *arg, int *out);
extern int GetBufferCachePtr__Fv(void);
extern unsigned int func_127DA0(char *buf);
extern int D_00223780;
extern char D_00220F88[];
extern char D_00220FA0[];
extern char D_0020FAEC[];

int func_130778(void)
{
    char buf1[0x20];
    char buf2[0x20];
    int x;
    int y;
    long h;

    sprintf(buf1, D_00220F88, D_00223780);
    sprintf(buf2, D_00220FA0, D_00223780);
    h = func_127BE8(buf1, D_0020FAEC, 0);
    y = GetBufferCachePtr__Fv();
    if (y == 0)
        return 0;
    if (func_127DA0(buf2) < 0x1A9000) {
        func_127BE8(buf2, (char *)&x, &y);
        return h != 0;
    }
    return 1;
}
