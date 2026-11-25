/* LEVEL_18:0x10D7C8 -- placement copy of LEVEL_01_131C98.c: validates a request against the object (checks, size limit), builds a transfer for it with the shared helpers and returns the destination pointer unless the final status reports a failure. */
typedef struct Obj {
    char pad_00[8];
    void *w_08;
} Obj;

extern char D_001D02E8[];
extern int func_10D6A0(Obj *o);
extern int func_10D5D8(Obj *o);
extern unsigned int func_10D570(Obj *o, int b);
extern int func_10D628(Obj *o, int b);
extern int func_0F8D68(void *w, char *tbl);
extern void func_0F8ED0(int h, int v, int mode);
extern int func_0F8F18(void *dst, unsigned int a, int n, unsigned int h);
extern int func_0F9090(int h);
extern void func_0F9070(int h);

void *func_10D7C8(Obj *o, int b, void *dst, unsigned int limit)
{
    unsigned int n;
    int v;
    int h;
    int fail;

    if (func_10D6A0(o) == 0)
        return 0;
    if (func_10D5D8(o) == 0)
        return 0;
    if (dst == 0)
        return 0;
    n = func_10D570(o, b);
    if (limit < n)
        return 0;
    v = func_10D628(o, b);
    fail = 0;
    h = func_0F8D68(o->w_08, D_001D02E8);
    if (h != 0) {
        func_0F8ED0(h, v, 2);
        func_0F8F18(dst, 1, n, h);
        fail = func_0F9090(h) != 0;
        func_0F9070(h);
    }
    return fail ? 0 : dst;
}
