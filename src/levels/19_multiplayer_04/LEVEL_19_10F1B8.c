/* LEVEL_19:0x10F1B8 -- placement copy of LEVEL_01_131C98.c: validates a request against the object (checks, size limit), builds a transfer for it with the shared helpers and returns the destination pointer unless the final status reports a failure. */
typedef struct Obj {
    char pad_00[8];
    void *w_08;
} Obj;

extern char D_001CFF68[];
extern int func_10F090(Obj *o);
extern int func_10EFC8(Obj *o);
extern unsigned int func_10EF60(Obj *o, int b);
extern int func_10F018(Obj *o, int b);
extern int func_0FA758(void *w, char *tbl);
extern void func_0FA8C0(int h, int v, int mode);
extern int func_0FA908(void *dst, unsigned int a, int n, unsigned int h);
extern int func_0FAA80(int h);
extern void func_0FAA60(int h);

void *func_10F1B8(Obj *o, int b, void *dst, unsigned int limit)
{
    unsigned int n;
    int v;
    int h;
    int fail;

    if (func_10F090(o) == 0)
        return 0;
    if (func_10EFC8(o) == 0)
        return 0;
    if (dst == 0)
        return 0;
    n = func_10EF60(o, b);
    if (limit < n)
        return 0;
    v = func_10F018(o, b);
    fail = 0;
    h = func_0FA758(o->w_08, D_001CFF68);
    if (h != 0) {
        func_0FA8C0(h, v, 2);
        func_0FA908(dst, 1, n, h);
        fail = func_0FAA80(h) != 0;
        func_0FAA60(h);
    }
    return fail ? 0 : dst;
}
