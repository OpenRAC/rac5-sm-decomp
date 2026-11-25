/* LEVEL_02:0x138048 -- placement copy of LEVEL_01_131C98.c: validates a request against the object (checks, size limit), builds a transfer for it with the shared helpers and returns the destination pointer unless the final status reports a failure. */
typedef struct Obj {
    char pad_00[8];
    void *w_08;
} Obj;

extern char D_0022F018[];
extern int func_137F20(Obj *o);
extern int func_137E58(Obj *o);
extern unsigned int func_137DF0(Obj *o, int b);
extern int func_137EA8(Obj *o, int b);
extern int func_120188(void *w, char *tbl);
extern void func_1202F0(int h, int v, int mode);
extern int func_120338(void *dst, unsigned int a, int n, unsigned int h);
extern int func_1204B0(int h);
extern void func_120490(int h);

void *func_138048(Obj *o, int b, void *dst, unsigned int limit)
{
    unsigned int n;
    int v;
    int h;
    int fail;

    if (func_137F20(o) == 0)
        return 0;
    if (func_137E58(o) == 0)
        return 0;
    if (dst == 0)
        return 0;
    n = func_137DF0(o, b);
    if (limit < n)
        return 0;
    v = func_137EA8(o, b);
    fail = 0;
    h = func_120188(o->w_08, D_0022F018);
    if (h != 0) {
        func_1202F0(h, v, 2);
        func_120338(dst, 1, n, h);
        fail = func_1204B0(h) != 0;
        func_120490(h);
    }
    return fail ? 0 : dst;
}
