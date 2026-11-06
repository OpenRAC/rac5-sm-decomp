extern char D_00224698[];
extern char D_00224328[];
extern char D_00253448[];
extern char D_00253468[];

extern int func_09E868(void *p, unsigned int flags, void *a, int b, int c, int d, void *e);
extern int func_09EA40(void *p);
extern void func_223160(void *a);
extern void func_2235B8(void *a);
extern int func_223628(int a, int b);

void func_2254D0(int *out1, unsigned int flags, int *out2, int a, int b)
{
    char buf[16];
    int r;

    func_09E868(buf, (((flags & 0xFFFFFFC3u) | 4) & 0xFFFFFFFCu) | 1,
                D_00224698, 0x34, 0, -1, D_00224328);
    r = func_09EA40(buf);
    *out1 = r;
    func_223160(D_00253448);
    func_2235B8(D_00253468);
    r = func_223628(a, b);
    *out2 = r;
}
