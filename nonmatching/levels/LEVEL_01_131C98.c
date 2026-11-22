/* USA LEVEL_01.REL:0x131C98 (21 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_119FF0 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct Obj {
    char pad_00[8];
    int w_08;
} Obj;

extern char D_0021A098[];
extern int func_131B70(Obj *o);
extern int func_131AA8(Obj *o);
extern unsigned int func_131A40(Obj *o, int b);
extern int func_131AF8(Obj *o, int b);
extern int func_119E40(int w, char *tbl);
extern void func_119FA8(int h, int v, int mode);
extern void func_119FF0(void *dst, int a, unsigned int n, int h);
extern int func_11A168(int h);
extern void func_11A148(int h);

void *func_131C98(Obj *o, int b, void *dst, unsigned int limit)
{
    unsigned int n;
    int v;
    int h;
    int fail;

    if (func_131B70(o) == 0)
        return 0;
    if (func_131AA8(o) == 0)
        return 0;
    if (dst == 0)
        return 0;
    n = func_131A40(o, b);
    if (limit < n)
        return 0;
    v = func_131AF8(o, b);
    fail = 0;
    h = func_119E40(o->w_08, D_0021A098);
    if (h != 0) {
        func_119FA8(h, v, 2);
        func_119FF0(dst, 1, n, h);
        fail = func_11A168(h) != 0;
        func_11A148(h);
    }
    return fail ? 0 : dst;
}
