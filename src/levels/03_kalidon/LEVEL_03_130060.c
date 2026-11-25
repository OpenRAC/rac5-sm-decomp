/* LEVEL_03:0x130060 -- placement copy of LEVEL_01_131C98.c: validates a request against the object (checks, size limit), builds a transfer for it with the shared helpers and returns the destination pointer unless the final status reports a failure. */
typedef struct Obj {
    char pad_00[8];
    void *w_08;
} Obj;

extern char D_00232F98[];
extern int func_12FF38(Obj *o);
extern int func_12FE70(Obj *o);
extern unsigned int func_12FE08(Obj *o, int b);
extern int func_12FEC0(Obj *o, int b);
extern int func_117FB0(void *w, char *tbl);
extern void func_118118(int h, int v, int mode);
extern int func_118160(void *dst, unsigned int a, int n, unsigned int h);
extern int func_1182D8(int h);
extern void func_1182B8(int h);

void *func_130060(Obj *o, int b, void *dst, unsigned int limit)
{
    unsigned int n;
    int v;
    int h;
    int fail;

    if (func_12FF38(o) == 0)
        return 0;
    if (func_12FE70(o) == 0)
        return 0;
    if (dst == 0)
        return 0;
    n = func_12FE08(o, b);
    if (limit < n)
        return 0;
    v = func_12FEC0(o, b);
    fail = 0;
    h = func_117FB0(o->w_08, D_00232F98);
    if (h != 0) {
        func_118118(h, v, 2);
        func_118160(dst, 1, n, h);
        fail = func_1182D8(h) != 0;
        func_1182B8(h);
    }
    return fail ? 0 : dst;
}
