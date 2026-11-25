/* LEVEL_05:0x12D610 -- placement copy of LEVEL_01_131C98.c: validates a request against the object (checks, size limit), builds a transfer for it with the shared helpers and returns the destination pointer unless the final status reports a failure. */
typedef struct Obj {
    char pad_00[8];
    void *w_08;
} Obj;

extern char D_00208F98[];
extern int func_12D4E8(Obj *o);
extern int func_12D420(Obj *o);
extern unsigned int func_12D3B8(Obj *o, int b);
extern int func_12D470(Obj *o, int b);
extern int func_115E60(void *w, char *tbl);
extern void func_115FC8(int h, int v, int mode);
extern int func_116010(void *dst, unsigned int a, int n, unsigned int h);
extern int func_116188(int h);
extern void func_116168(int h);

void *func_12D610(Obj *o, int b, void *dst, unsigned int limit)
{
    unsigned int n;
    int v;
    int h;
    int fail;

    if (func_12D4E8(o) == 0)
        return 0;
    if (func_12D420(o) == 0)
        return 0;
    if (dst == 0)
        return 0;
    n = func_12D3B8(o, b);
    if (limit < n)
        return 0;
    v = func_12D470(o, b);
    fail = 0;
    h = func_115E60(o->w_08, D_00208F98);
    if (h != 0) {
        func_115FC8(h, v, 2);
        func_116010(dst, 1, n, h);
        fail = func_116188(h) != 0;
        func_116168(h);
    }
    return fail ? 0 : dst;
}
