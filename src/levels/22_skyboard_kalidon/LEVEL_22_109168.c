/* LEVEL_22:0x109168 -- placement copy of LEVEL_01_131C98.c: validates a request against the object (checks, size limit), builds a transfer for it with the shared helpers and returns the destination pointer unless the final status reports a failure. */
typedef struct Obj {
    char pad_00[8];
    void *w_08;
} Obj;

extern char D_00177518[];
extern int func_109040(Obj *o);
extern int func_108F78(Obj *o);
extern unsigned int func_108F10(Obj *o, int b);
extern int func_108FC8(Obj *o, int b);
extern int func_0F4300(void *w, char *tbl);
extern void func_0F4468(int h, int v, int mode);
extern int func_0F44B0(void *dst, unsigned int a, int n, unsigned int h);
extern int func_0F4628(int h);
extern void func_0F4608(int h);

void *func_109168(Obj *o, int b, void *dst, unsigned int limit)
{
    unsigned int n;
    int v;
    int h;
    int fail;

    if (func_109040(o) == 0)
        return 0;
    if (func_108F78(o) == 0)
        return 0;
    if (dst == 0)
        return 0;
    n = func_108F10(o, b);
    if (limit < n)
        return 0;
    v = func_108FC8(o, b);
    fail = 0;
    h = func_0F4300(o->w_08, D_00177518);
    if (h != 0) {
        func_0F4468(h, v, 2);
        func_0F44B0(dst, 1, n, h);
        fail = func_0F4628(h) != 0;
        func_0F4608(h);
    }
    return fail ? 0 : dst;
}
