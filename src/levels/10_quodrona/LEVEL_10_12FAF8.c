/* LEVEL_10:0x12FAF8 -- placement copy of LEVEL_01_131C98.c: validates a request against the object (checks, size limit), builds a transfer for it with the shared helpers and returns the destination pointer unless the final status reports a failure. */
typedef struct Obj {
    char pad_00[8];
    void *w_08;
} Obj;

extern char D_00223028[];
extern int func_12F9D0(Obj *o);
extern int func_12F908(Obj *o);
extern unsigned int func_12F8A0(Obj *o, int b);
extern int func_12F958(Obj *o, int b);
extern int func_118058(void *w, char *tbl);
extern void func_1181C0(int h, int v, int mode);
extern int func_118208(void *dst, unsigned int a, int n, unsigned int h);
extern int func_118380(int h);
extern void func_118360(int h);

void *func_12FAF8(Obj *o, int b, void *dst, unsigned int limit)
{
    unsigned int n;
    int v;
    int h;
    int fail;

    if (func_12F9D0(o) == 0)
        return 0;
    if (func_12F908(o) == 0)
        return 0;
    if (dst == 0)
        return 0;
    n = func_12F8A0(o, b);
    if (limit < n)
        return 0;
    v = func_12F958(o, b);
    fail = 0;
    h = func_118058(o->w_08, D_00223028);
    if (h != 0) {
        func_1181C0(h, v, 2);
        func_118208(dst, 1, n, h);
        fail = func_118380(h) != 0;
        func_118360(h);
    }
    return fail ? 0 : dst;
}
