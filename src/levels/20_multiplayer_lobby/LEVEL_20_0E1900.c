/* LEVEL_20:0x0E1900 -- placement copy of LEVEL_01_131C98.c: validates a request against the object (checks, size limit), builds a transfer for it with the shared helpers and returns the destination pointer unless the final status reports a failure. */
typedef struct Obj {
    char pad_00[8];
    void *w_08;
} Obj;

extern char D_0012FDD8[];
extern int func_0E17D8(Obj *o);
extern int func_0E1710(Obj *o);
extern unsigned int func_0E16A8(Obj *o, int b);
extern int func_0E1760(Obj *o, int b);
extern int func_0D3390(void *w, char *tbl);
extern void func_0D34F8(int h, int v, int mode);
extern int func_0D3540(void *dst, unsigned int a, int n, unsigned int h);
extern int func_0D36B8(int h);
extern void func_0D3698(int h);

void *func_0E1900(Obj *o, int b, void *dst, unsigned int limit)
{
    unsigned int n;
    int v;
    int h;
    int fail;

    if (func_0E17D8(o) == 0)
        return 0;
    if (func_0E1710(o) == 0)
        return 0;
    if (dst == 0)
        return 0;
    n = func_0E16A8(o, b);
    if (limit < n)
        return 0;
    v = func_0E1760(o, b);
    fail = 0;
    h = func_0D3390(o->w_08, D_0012FDD8);
    if (h != 0) {
        func_0D34F8(h, v, 2);
        func_0D3540(dst, 1, n, h);
        fail = func_0D36B8(h) != 0;
        func_0D3698(h);
    }
    return fail ? 0 : dst;
}
