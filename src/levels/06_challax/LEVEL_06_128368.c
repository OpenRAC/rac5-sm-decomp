/* LEVEL_06:0x128368 -- placement copy of LEVEL_01_131C98.c: validates a request against the object (checks, size limit), builds a transfer for it with the shared helpers and returns the destination pointer unless the final status reports a failure. */
typedef struct Obj {
    char pad_00[8];
    void *w_08;
} Obj;

extern char D_00208F18[];
extern int func_128240(Obj *o);
extern int func_128178(Obj *o);
extern unsigned int func_128110(Obj *o, int b);
extern int func_1281C8(Obj *o, int b);
extern int func_110410(void *w, char *tbl);
extern void func_110578(int h, int v, int mode);
extern int func_1105C0(void *dst, unsigned int a, int n, unsigned int h);
extern int func_110738(int h);
extern void func_110718(int h);

void *func_128368(Obj *o, int b, void *dst, unsigned int limit)
{
    unsigned int n;
    int v;
    int h;
    int fail;

    if (func_128240(o) == 0)
        return 0;
    if (func_128178(o) == 0)
        return 0;
    if (dst == 0)
        return 0;
    n = func_128110(o, b);
    if (limit < n)
        return 0;
    v = func_1281C8(o, b);
    fail = 0;
    h = func_110410(o->w_08, D_00208F18);
    if (h != 0) {
        func_110578(h, v, 2);
        func_1105C0(dst, 1, n, h);
        fail = func_110738(h) != 0;
        func_110718(h);
    }
    return fail ? 0 : dst;
}
