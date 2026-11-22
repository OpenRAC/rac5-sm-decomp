/* USA LEVEL_16.REL:0x1669E0, 224-byte candidate (21 November 2026).
 * Measured gnu-ee-trial: 10 differing words; first difference at 0x5C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern void *memset(void *, int, unsigned int);

typedef struct {
    char pad00[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Tmpl;

typedef struct {
    int w0;
    char pad04[0x40 - 4];
    unsigned int flags;
} Rec;

typedef struct {
    char pad00[0x45];
    unsigned char b45;
    char pad46[0x58 - 0x46];
    Rec *rec;
} Obj;

extern Tmpl *D_001BE014;
extern void func_0380F8(void *target, Obj *o);
extern void func_1040F8(Obj *a, Obj *b, float *m);
extern void func_117290(void *target);
extern void func_073518(Obj *o, Tmpl *t, int a, int b, int c, int d, int e, int f, float f0, float f1,
                        float f2, float f3);

void func_1669E0(Obj *o, void *target)
{
    Rec *rec;
    float m[9];
    Tmpl *t;
    float half;

    rec = o->rec;
    if (target != 0) {
        func_0380F8(target, o);
        rec->w0 = (int)target;
        half = 0.5f;
        o->b45 = 3;
        memset(m, 0, 0x24);
        m[4] = half;
        m[0] = half;
        m[8] = half;
        func_1040F8(o, o, m);
        func_117290(target);
        rec->flags = rec->flags | 1;
        t = D_001BE014;
        if (t != 0)
            func_073518(o, t, 0, 0, 0, 0, 0, 1, t->f14, t->f18, t->f1C, t->f20);
    }
}
