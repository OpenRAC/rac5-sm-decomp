/* LEVEL_17:0x10E090 -- placement copy of LEVEL_01_131C98.c: validates a request against the object (checks, size limit), builds a transfer for it with the shared helpers and returns the destination pointer unless the final status reports a failure. */
typedef struct Obj {
    char pad_00[8];
    void *w_08;
} Obj;

extern char D_001C21E8[];
extern int func_10DF68(Obj *o);
extern int func_10DEA0(Obj *o);
extern unsigned int func_10DE38(Obj *o, int b);
extern int func_10DEF0(Obj *o, int b);
extern int func_0F9B40(void *w, char *tbl);
extern void func_0F9CA8(int h, int v, int mode);
extern int func_0F9CF0(void *dst, unsigned int a, int n, unsigned int h);
extern int func_0F9E68(int h);
extern void func_0F9E48(int h);

void *func_10E090(Obj *o, int b, void *dst, unsigned int limit)
{
    unsigned int n;
    int v;
    int h;
    int fail;

    if (func_10DF68(o) == 0)
        return 0;
    if (func_10DEA0(o) == 0)
        return 0;
    if (dst == 0)
        return 0;
    n = func_10DE38(o, b);
    if (limit < n)
        return 0;
    v = func_10DEF0(o, b);
    fail = 0;
    h = func_0F9B40(o->w_08, D_001C21E8);
    if (h != 0) {
        func_0F9CA8(h, v, 2);
        func_0F9CF0(dst, 1, n, h);
        fail = func_0F9E68(h) != 0;
        func_0F9E48(h);
    }
    return fail ? 0 : dst;
}
