/* LEVEL_15:0x109C18 -- builds a transform for the object, then reports a randomly offset point for each table entry the manager returns. */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    float m[9];
    Vec3 pos;
} Xform;

typedef struct {
    char pad_00[0x54];
    float a_54[4];
    char pad_64[0x50];
    float b_B4[4];
    Vec3 pos_C4;
    char pad_D0[0x148];
    float r_218;
} Obj;

typedef struct {
    char pad_00[0x24];
    Vec3 pos;
} Item;

typedef struct {
    char pad_00[0x118];
} Elem;

typedef struct {
    char pad_00[0xE4];
    Elem *arr_E4;
    int count_E8;
} Mgr;

extern Mgr D_002EF910;
extern int D_0016FEF0[];
extern char D_002EF8E0[];

extern void func_0E8948(Xform *out, float *in);
extern void func_0EC3A0(Xform *out, float *in, Xform *s);
extern Item *func_11D5D0(Elem *e, Xform *t, int id, float r);
extern void func_0E6A68(Vec3 *out, float lo, float hi);
extern void func_114BB0(int a, Vec3 *p);
extern void func_12B788(char *a, Vec3 *p);

static __inline__ void vecAdd(Vec3 *out, Vec3 *a, Vec3 *b)
{
    out->x = a->x + b->x;
    out->y = a->y + b->y;
    out->z = a->z + b->z;
}

void func_109C18(Obj *o)
{
    Xform s;
    Xform t;
    Vec3 rnd;
    Vec3 sum;
    Item *it;
    float r;
    float lim;
    int n;
    int i;

    r = o->r_218;
    func_0E8948(&s, o->b_B4);
    s.pos = o->pos_C4;
    func_0EC3A0(&t, o->a_54, &s);
    lim = r * r * 5.0f * 5.0f;
    n = D_002EF910.count_E8;
    for (i = 0; i < n; i++) {
        it = func_11D5D0(&D_002EF910.arr_E4[i], &t, D_0016FEF0[i], r);
        if (it != 0 && D_0016FEF0[i] != -1) {
            func_0E6A68(&rnd, 0.0f, lim);
            vecAdd(&sum, &it->pos, &rnd);
            func_114BB0(0, &sum);
        }
    }
    func_12B788(D_002EF8E0, &t.pos);
}
