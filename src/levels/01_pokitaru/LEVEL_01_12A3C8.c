/* LEVEL_01:0x12A3C8 -- placement copy of LEVEL_02_130778.c. */
extern int sprintf(char *buf, const char *fmt, ...);
extern int func_129D88(char *buf, char *arg, int *out);
extern int GetBufferCachePtr__Fv(void);
extern unsigned int func_129F40(char *buf);
extern int D_0021A7F0;
extern char D_00217FF8[];
extern char D_00218010[];
extern char D_00206E8C[];

int func_12A3C8(void)
{
    char buf1[0x20];
    char buf2[0x20];
    int x;
    int y;
    long h;

    sprintf(buf1, D_00217FF8, D_0021A7F0);
    sprintf(buf2, D_00218010, D_0021A7F0);
    h = func_129D88(buf1, D_00206E8C, 0);
    y = GetBufferCachePtr__Fv();
    if (y == 0)
        return 0;
    if (func_129F40(buf2) < 0x1A9000) {
        func_129D88(buf2, (char *)&x, &y);
        return h != 0;
    }
    return 1;
}
