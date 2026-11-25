/* LEVEL_23:0x123410 -- placement copy of LEVEL_01_131C98.c: validates a request against the object (checks, size limit), builds a transfer for it with the shared helpers and returns the destination pointer unless the final status reports a failure. */
typedef struct Obj {
    char pad_00[8];
    void *w_08;
} Obj;

extern char D_001ED218[];
extern int func_1232E8(Obj *o);
extern int func_123220(Obj *o);
extern unsigned int func_1231B8(Obj *o, int b);
extern int func_123270(Obj *o, int b);
extern int func_10B3A8(void *w, char *tbl);
extern void func_10B510(int h, int v, int mode);
extern int func_10B558(void *dst, unsigned int a, int n, unsigned int h);
extern int func_10B6D0(int h);
extern void func_10B6B0(int h);

void *func_123410(Obj *o, int b, void *dst, unsigned int limit)
{
    unsigned int n;
    int v;
    int h;
    int fail;

    if (func_1232E8(o) == 0)
        return 0;
    if (func_123220(o) == 0)
        return 0;
    if (dst == 0)
        return 0;
    n = func_1231B8(o, b);
    if (limit < n)
        return 0;
    v = func_123270(o, b);
    fail = 0;
    h = func_10B3A8(o->w_08, D_001ED218);
    if (h != 0) {
        func_10B510(h, v, 2);
        func_10B558(dst, 1, n, h);
        fail = func_10B6D0(h) != 0;
        func_10B6B0(h);
    }
    return fail ? 0 : dst;
}
