/* LEVEL_15.REL:0x1348C8: reviewed 680-byte candidate, held for ABI review.
 * Applies timed table entries as impulses, plus an empty stub.
 * gnu-ee-trial C with gnu-ee-trial links 680/680 bytes and is byte-exact at
 * this and 1 other USA placement, but the prototypes disagree.
 * It declares func_070370 returning pointer with (pointer, int), but the
 * accepted LEVEL_15_070370.c defines it returning pointer with (int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct { float x, y, z; } Vec3;
typedef struct { float t; void *h; Vec3 v; } TEnt;
typedef struct { void *h; int pad[5]; } UEnt;
typedef struct { char pad[0x10]; float k; } KRec;
typedef struct { char pad[0x1C]; KRec *r; } Spec;
typedef struct { int pad; Spec *spec; char pad2[0x34 - 8]; } Item;
typedef struct { int pad; Item *items; } Hold;
typedef struct { char pad[8]; float w; } Aux;
typedef struct { char pad[0x40]; Hold *hold; unsigned char idx; char pad2[3]; Aux *aux; } Obj;
typedef struct { char pad[0x38]; short adj; short pad2; void (*fn)(void *); } VTab;
typedef struct { VTab *vt; } VObj;
typedef struct { char pad[0x30]; Vec3 sub; char pad2[0xC8 - 0x3C]; } Elem;
typedef struct { char pad0[0x24]; Vec3 v; } Work;
typedef struct {
    char pad[0x68];
    VObj *vobj;
    char pad2[0x204 - 0x6C];
    Elem e[2];
} Glob;

extern TEnt D_00171B90[];
extern UEnt D_00171BB8[];
extern Glob D_002F4F88;
extern void *func_070370(void *h, int n);
extern void func_0EA9E0(Vec3 *out, void *e, Vec3 *v);
extern void func_0EAA88(Vec3 *a, Obj *o, Vec3 *b);
extern void func_1350C0(Vec3 *v);
extern void func_0E9728(Work *w, void *e);
extern void func_0EC3A0(Elem *a, Vec3 *b, Work *w);
extern int func_1345E8(void);
extern float func_1347B0(void);

void func_1348C8(Obj *o, int i)
{
    Vec3 v;
    void *e;
    Vec3 *p;
    float k;

    e = func_070370(D_00171B90[i].h, 1);
    func_0EA9E0(&v, e, &D_00171B90[i].v);
    p = (Vec3 *)((char *)e + 0x30);
    k = o->hold->items[o->idx].spec->r->k;
    v.x = v.x + p->x * k;
    v.y = v.y + p->y * k;
    v.z = v.z + p->z * k;
    func_0EAA88(&v, o, &v);
    func_1350C0(&v);
}

void func_1349B8(Obj *o)
{
    Work w;
    int i;
    unsigned j;
    void *e;
    Vec3 *p;
    float k, t1, t0, tmp;
    VObj *vo = D_002F4F88.vobj;

    vo->vt->fn((char *)vo + vo->vt->adj);
    for (i = 0; i < 2; i++) {
        e = func_070370(D_00171BB8[i].h, 1);
        func_0E9728(&w, e);
        p = (Vec3 *)((char *)e + 0x30);
        k = o->hold->items[o->idx].spec->r->k;
        w.v.x = k * p->x;
        w.v.y = k * p->y;
        w.v.z = k * p->z;
        func_0EC3A0(&D_002F4F88.e[i], &D_002F4F88.e[i].sub, &w);
    }
    if (func_1345E8() == 3) {
        tmp = o->aux->w;
        t1 = func_1347B0();
        t0 = t1 + tmp * 0.033333335f;
        for (j = 0; j < 2; j++) {
            if (t1 <= D_00171B90[j].t && D_00171B90[j].t < t0)
                func_1348C8(o, j);
        }
    }
}

void func_134B68(void)
{
}
