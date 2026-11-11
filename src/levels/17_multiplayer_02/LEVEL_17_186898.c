extern char D_00185A60[];
extern char D_001856F0[];
extern char D_001B1E40[];
extern char D_001B1E60[];

extern int func_087F70(void *p, unsigned int flags, void *a, int b, int c, int d, void *e);
extern int func_088148(void *p);
extern void func_184528(void *a);
extern void func_184980(void *a);
extern int func_1849F0(int a, int b);

void func_186898(int *out1, unsigned int flags, int *out2, int a, int b)
{
    char buf[16];
    int r;

    func_087F70(buf, (((flags & 0xFFFFFFC3u) | 4) & 0xFFFFFFFCu) | 1,
                D_00185A60, 0x34, 0, -1, D_001856F0);
    r = func_088148(buf);
    *out1 = r;
    func_184528(D_001B1E40);
    func_184980(D_001B1E60);
    r = func_1849F0(a, b);
    *out2 = r;
}
