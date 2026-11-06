extern char D_001938B8[];
extern char D_00193548[];
extern char D_001BFF28[];
extern char D_001BFF48[];

extern int func_086E78(void *p, unsigned int flags, void *a, int b, int c, int d, void *e);
extern int func_087050(void *p);
extern void func_192380(void *a);
extern void func_1927D8(void *a);
extern int func_192848(int a, int b);

void func_1946F0(int *out1, unsigned int flags, int *out2, int a, int b)
{
    char buf[16];
    int r;

    func_086E78(buf, (((flags & 0xFFFFFFC3u) | 4) & 0xFFFFFFFCu) | 1,
                D_001938B8, 0x34, 0, -1, D_00193548);
    r = func_087050(buf);
    *out1 = r;
    func_192380(D_001BFF28);
    func_1927D8(D_001BFF48);
    r = func_192848(a, b);
    *out2 = r;
}
