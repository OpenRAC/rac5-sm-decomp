/* LEVEL_04:0x13E118 -- placement copy of LEVEL_01_131C98.c: validates a request against the object (checks, size limit), builds a transfer for it with the shared helpers and returns the destination pointer unless the final status reports a failure. */
typedef struct Obj {
    char pad_00[8];
    void *w_08;
} Obj;

extern char D_00233A18[];
extern int func_13DFF0(Obj *o);
extern int func_13DF28(Obj *o);
extern unsigned int func_13DEC0(Obj *o, int b);
extern int func_13DF78(Obj *o, int b);
extern int func_1253A8(void *w, char *tbl);
extern void func_125510(int h, int v, int mode);
extern int func_125558(void *dst, unsigned int a, int n, unsigned int h);
extern int func_1256D0(int h);
extern void func_1256B0(int h);

void *func_13E118(Obj *o, int b, void *dst, unsigned int limit)
{
    unsigned int n;
    int v;
    int h;
    int fail;

    if (func_13DFF0(o) == 0)
        return 0;
    if (func_13DF28(o) == 0)
        return 0;
    if (dst == 0)
        return 0;
    n = func_13DEC0(o, b);
    if (limit < n)
        return 0;
    v = func_13DF78(o, b);
    fail = 0;
    h = func_1253A8(o->w_08, D_00233A18);
    if (h != 0) {
        func_125510(h, v, 2);
        func_125558(dst, 1, n, h);
        fail = func_1256D0(h) != 0;
        func_1256B0(h);
    }
    return fail ? 0 : dst;
}
