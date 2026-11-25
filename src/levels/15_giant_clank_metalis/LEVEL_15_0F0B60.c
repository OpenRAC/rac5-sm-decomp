/* LEVEL_15:0x0F0B60 -- placement copy of LEVEL_01_131C98.c: validates a request against the object (checks, size limit), builds a transfer for it with the shared helpers and returns the destination pointer unless the final status reports a failure. */
typedef struct Obj {
    char pad_00[8];
    void *w_08;
} Obj;

extern char D_0016E818[];
extern int func_0F0A38(Obj *o);
extern int func_0F0970(Obj *o);
extern unsigned int func_0F0908(Obj *o, int b);
extern int func_0F09C0(Obj *o, int b);
extern int func_0DE1A0(void *w, char *tbl);
extern void func_0DE308(int h, int v, int mode);
extern int func_0DE350(void *dst, unsigned int a, int n, unsigned int h);
extern int func_0DE4C8(int h);
extern void func_0DE4A8(int h);

void *func_0F0B60(Obj *o, int b, void *dst, unsigned int limit)
{
    unsigned int n;
    int v;
    int h;
    int fail;

    if (func_0F0A38(o) == 0)
        return 0;
    if (func_0F0970(o) == 0)
        return 0;
    if (dst == 0)
        return 0;
    n = func_0F0908(o, b);
    if (limit < n)
        return 0;
    v = func_0F09C0(o, b);
    fail = 0;
    h = func_0DE1A0(o->w_08, D_0016E818);
    if (h != 0) {
        func_0DE308(h, v, 2);
        func_0DE350(dst, 1, n, h);
        fail = func_0DE4C8(h) != 0;
        func_0DE4A8(h);
    }
    return fail ? 0 : dst;
}
