/* LEVEL_08:0x16D8C0 -- small object state callbacks (threshold test, update, setup, teardown). */
typedef struct Hook { char pad0[0xDC]; void (*cbA)(void *); void (*cbB)(void *); } Hook;
typedef struct Res { char pad0[0x64]; unsigned int flags; } Res;
typedef struct Aux { int pad0; void *a; void *b; } Aux;
typedef struct Ent {
    float level; char pad4[0x86]; unsigned char b8A; char pad8B[5]; Res *res;
    char m94[0xC]; Aux aux; char mAC[0x54]; char m100[0x28]; char m128[4]; char m12C[4];
} Ent;
typedef struct Obj {
    char pad0[0x20]; float v[3]; char pad2C[8]; float f34; char pad38[0xD];
    unsigned char b45; char pad46[2]; Hook *hook; char pad4C[0xC]; Ent *ent;
} Obj;
static inline void Vscale(float *out, float *a, float s)
{
    out[0] = a[0] * s;
    out[1] = a[1] * s;
    out[2] = a[2] * s;
}
extern int D_00278EA0;
extern char D_00278F38[];
extern char D_00278F18[];
extern float D_002843D0[];
extern void func_220348(void *p, int a);
extern void func_21FF68(void *p, int a);
extern void func_20ED60(void *p, int a, void *c);
extern void func_035B08(Ent *e, Obj *o, Res *r, void *p, int t);
extern void func_21AEB8(float a, float b, void *p, Res *r, Obj *o);
extern void func_20CA00(float f, Obj *o, void *p);
extern int func_20C3C0(float a, float b, Obj *o);
extern void func_0124E0(float *v);
extern void func_035A30(Obj *o, float f);
extern Res *func_035A78(Obj *o);
extern void func_0845F8(void *p, int a);
extern void func_084758(Res *r);
extern void func_08FE38(int a);
extern void func_20CCC0(Obj *o);
extern void func_088AA8(void *p);
extern void func_20ED08(void *p);
extern void func_16D938(void *);
extern void func_16D8F0(void *);

int func_16D8C0(Obj *o)
{
    return o->ent->level >= 0.16666667f;
}

void func_16D8F0(void *p)
{
    Obj *o = p;
    Ent *e = o->ent;
    func_220348(e->m128, 1);
    func_21FF68(e->m100, o->b45 != 0);
}

void func_16D938(void *p)
{
    Obj *o = p;
    Ent *e = o->ent;
    float *g = D_002843D0;
    func_20ED60(e->mAC, (int)o, D_00278F38);
    func_035B08(e, o, e->res, e->m12C, D_00278EA0);
    func_21AEB8(g[0x96C / 4] / g[0x970 / 4], o->f34, e->m94, e->res, o);
    func_20CA00(0.16666667f, o, D_00278F18);
}

void func_16D9E0(Obj *o)
{
    Ent *e = o->ent;
    float w;
    float v[3];
    if (e->level < 0.16666667f) return;
    w = 3.0f;
    if (e->b8A) w = 4.0f;
    if (func_20C3C0(e->level, w, o)) {
        Vscale(v, o->v, 20.0f);
        func_0124E0(v);
    }
}

void func_16DA88(Obj *o, int a)
{
    Ent *e = o->ent;
    Res *r;
    Aux *x;
    if (a) {
        o->hook->cbA = func_16D938;
        o->hook->cbB = func_16D8F0;
        func_035A30(o, 20.0f);
        e->res = func_035A78(o);
    } else {
        r = e->res;
        func_0845F8(r, 1);
        if (r->flags & 6) func_084758(r);
        func_08FE38(2);
        x = &e->aux;
        func_20CCC0(o);
        if (x->a) {
            func_0845F8(x->a, 1);
            x->a = 0;
        }
        if (x->b) {
            func_088AA8(x->b);
            x->b = 0;
        }
        func_20ED08(e->mAC);
    }
}
