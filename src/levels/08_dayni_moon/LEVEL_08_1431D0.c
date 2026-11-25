/* LEVEL_08:0x1431D0 -- placement copy of LEVEL_01_131C98.c: validates a request against the object (checks, size limit), builds a transfer for it with the shared helpers and returns the destination pointer unless the final status reports a failure. */
typedef struct Obj {
    char pad_00[8];
    void *w_08;
} Obj;

extern char D_00263D18[];
extern int func_1430A8(Obj *o);
extern int func_142FE0(Obj *o);
extern unsigned int func_142F78(Obj *o, int b);
extern int func_143030(Obj *o, int b);
extern int func_12A5E0(void *w, char *tbl);
extern void func_12A748(int h, int v, int mode);
extern int func_12A790(void *dst, unsigned int a, int n, unsigned int h);
extern int func_12A908(int h);
extern void func_12A8E8(int h);

void *func_1431D0(Obj *o, int b, void *dst, unsigned int limit)
{
    unsigned int n;
    int v;
    int h;
    int fail;

    if (func_1430A8(o) == 0)
        return 0;
    if (func_142FE0(o) == 0)
        return 0;
    if (dst == 0)
        return 0;
    n = func_142F78(o, b);
    if (limit < n)
        return 0;
    v = func_143030(o, b);
    fail = 0;
    h = func_12A5E0(o->w_08, D_00263D18);
    if (h != 0) {
        func_12A748(h, v, 2);
        func_12A790(dst, 1, n, h);
        fail = func_12A908(h) != 0;
        func_12A8E8(h);
    }
    return fail ? 0 : dst;
}
