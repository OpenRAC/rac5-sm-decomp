/* USA LEVEL_04.REL:0x1DD8C0, 216-byte candidate (21 November 2026).
 * Measured pinned: 16 differing words; first difference at 0x14.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad00[0xC];
    unsigned short flags;
} Sub;

typedef struct {
    char *pos;
    char pad04[0xC8];
    Sub sub;
} Rec;

typedef struct {
    char pad00[0x58];
    Rec *rec;
} Obj;

extern void func_1DD510(Obj *o, float *v, int a);
extern int func_1DD6E8(Obj *o, int a, int b, void *c, void *d);
extern void func_1DD598(Obj *o, int a, int b);

int func_1DD8C0(Obj *o, int a, int b, int c)
{
    float v[4];
    Rec *r;
    Sub *s;
    char *p;
    int ok;

    r = o->rec;
    s = &r->sub;
    p = r->pos + 0x30;
    s->flags |= 8;
    func_1DD510(o, v, c);
    ok = func_1DD6E8(o, a, b, p, v);
    if (ok == 0) {
        func_1DD598(o, a, c);
        ok = func_1DD6E8(o, a, b, v, (void *)a);
    } else {
        ok = 1;
    }
    s->flags &= ~8;
    return ok;
}
