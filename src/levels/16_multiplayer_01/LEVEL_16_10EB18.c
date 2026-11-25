/* LEVEL_16:0x10EB18 -- placement copy of LEVEL_01_131C98.c: validates a request against the object (checks, size limit), builds a transfer for it with the shared helpers and returns the destination pointer unless the final status reports a failure. */
typedef struct Obj {
    char pad_00[8];
    void *w_08;
} Obj;

extern char D_001CED68[];
extern int func_10E9F0(Obj *o);
extern int func_10E928(Obj *o);
extern unsigned int func_10E8C0(Obj *o, int b);
extern int func_10E978(Obj *o, int b);
extern int func_0FA530(void *w, char *tbl);
extern void func_0FA698(int h, int v, int mode);
extern int func_0FA6E0(void *dst, unsigned int a, int n, unsigned int h);
extern int func_0FA858(int h);
extern void func_0FA838(int h);

void *func_10EB18(Obj *o, int b, void *dst, unsigned int limit)
{
    unsigned int n;
    int v;
    int h;
    int fail;

    if (func_10E9F0(o) == 0)
        return 0;
    if (func_10E928(o) == 0)
        return 0;
    if (dst == 0)
        return 0;
    n = func_10E8C0(o, b);
    if (limit < n)
        return 0;
    v = func_10E978(o, b);
    fail = 0;
    h = func_0FA530(o->w_08, D_001CED68);
    if (h != 0) {
        func_0FA698(h, v, 2);
        func_0FA6E0(dst, 1, n, h);
        fail = func_0FA858(h) != 0;
        func_0FA838(h);
    }
    return fail ? 0 : dst;
}
