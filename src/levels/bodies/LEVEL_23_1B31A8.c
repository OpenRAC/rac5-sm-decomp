extern char D_001B2370[];
extern char D_001B2000[];
extern char D_001DCB70[];
extern char D_001DCB90[];

extern int func_08C368(void *p, unsigned int flags, void *a, int b, int c, int d, void *e);
extern int func_08C540(void *p);
extern void func_1B0E38(void *a);
extern void func_1B1290(void *a);
extern int func_1B1300(int a, int b);

void func_1B31A8(int *out1, unsigned int flags, int *out2, int a, int b)
{
    char buf[16];
    int r;

    func_08C368(buf, (((flags & 0xFFFFFFC3u) | 4) & 0xFFFFFFFCu) | 1,
                D_001B2370, 0x34, 0, -1, D_001B2000);
    r = func_08C540(buf);
    *out1 = r;
    func_1B0E38(D_001DCB70);
    func_1B1290(D_001DCB90);
    r = func_1B1300(a, b);
    *out2 = r;
}
