/* LEVEL_09:0x12AC30 -- placement copy of LEVEL_01_131C98.c: validates a request against the object (checks, size limit), builds a transfer for it with the shared helpers and returns the destination pointer unless the final status reports a failure. */
typedef struct Obj {
    char pad_00[8];
    void *w_08;
} Obj;

extern char D_00203C98[];
extern int func_12AB08(Obj *o);
extern int func_12AA40(Obj *o);
extern unsigned int func_12A9D8(Obj *o, int b);
extern int func_12AA90(Obj *o, int b);
extern int func_113230(void *w, char *tbl);
extern void func_113398(int h, int v, int mode);
extern int func_1133E0(void *dst, unsigned int a, int n, unsigned int h);
extern int func_113558(int h);
extern void func_113538(int h);

void *func_12AC30(Obj *o, int b, void *dst, unsigned int limit)
{
    unsigned int n;
    int v;
    int h;
    int fail;

    if (func_12AB08(o) == 0)
        return 0;
    if (func_12AA40(o) == 0)
        return 0;
    if (dst == 0)
        return 0;
    n = func_12A9D8(o, b);
    if (limit < n)
        return 0;
    v = func_12AA90(o, b);
    fail = 0;
    h = func_113230(o->w_08, D_00203C98);
    if (h != 0) {
        func_113398(h, v, 2);
        func_1133E0(dst, 1, n, h);
        fail = func_113558(h) != 0;
        func_113538(h);
    }
    return fail ? 0 : dst;
}
