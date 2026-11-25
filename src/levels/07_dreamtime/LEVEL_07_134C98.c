/* LEVEL_07:0x134C98 -- placement copy of LEVEL_01_131C98.c: validates a request against the object (checks, size limit), builds a transfer for it with the shared helpers and returns the destination pointer unless the final status reports a failure. */
typedef struct Obj {
    char pad_00[8];
    void *w_08;
} Obj;

extern char D_0022ED98[];
extern int func_134B70(Obj *o);
extern int func_134AA8(Obj *o);
extern unsigned int func_134A40(Obj *o, int b);
extern int func_134AF8(Obj *o, int b);
extern int func_11CE90(void *w, char *tbl);
extern void func_11CFF8(int h, int v, int mode);
extern int func_11D040(void *dst, unsigned int a, int n, unsigned int h);
extern int func_11D1B8(int h);
extern void func_11D198(int h);

void *func_134C98(Obj *o, int b, void *dst, unsigned int limit)
{
    unsigned int n;
    int v;
    int h;
    int fail;

    if (func_134B70(o) == 0)
        return 0;
    if (func_134AA8(o) == 0)
        return 0;
    if (dst == 0)
        return 0;
    n = func_134A40(o, b);
    if (limit < n)
        return 0;
    v = func_134AF8(o, b);
    fail = 0;
    h = func_11CE90(o->w_08, D_0022ED98);
    if (h != 0) {
        func_11CFF8(h, v, 2);
        func_11D040(dst, 1, n, h);
        fail = func_11D1B8(h) != 0;
        func_11D198(h);
    }
    return fail ? 0 : dst;
}
