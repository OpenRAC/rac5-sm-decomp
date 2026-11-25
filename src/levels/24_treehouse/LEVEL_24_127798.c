/* LEVEL_24:0x127798 -- placement copy of LEVEL_01_131C98.c: validates a request against the object (checks, size limit), builds a transfer for it with the shared helpers and returns the destination pointer unless the final status reports a failure. */
typedef struct Obj {
    char pad_00[8];
    void *w_08;
} Obj;

extern char D_001EAE18[];
extern int func_127670(Obj *o);
extern int func_1275A8(Obj *o);
extern unsigned int func_127540(Obj *o, int b);
extern int func_1275F8(Obj *o, int b);
extern int func_1100A8(void *w, char *tbl);
extern void func_110210(int h, int v, int mode);
extern int func_110258(void *dst, unsigned int a, int n, unsigned int h);
extern int func_1103D0(int h);
extern void func_1103B0(int h);

void *func_127798(Obj *o, int b, void *dst, unsigned int limit)
{
    unsigned int n;
    int v;
    int h;
    int fail;

    if (func_127670(o) == 0)
        return 0;
    if (func_1275A8(o) == 0)
        return 0;
    if (dst == 0)
        return 0;
    n = func_127540(o, b);
    if (limit < n)
        return 0;
    v = func_1275F8(o, b);
    fail = 0;
    h = func_1100A8(o->w_08, D_001EAE18);
    if (h != 0) {
        func_110210(h, v, 2);
        func_110258(dst, 1, n, h);
        fail = func_1103D0(h) != 0;
        func_1103B0(h);
    }
    return fail ? 0 : dst;
}
