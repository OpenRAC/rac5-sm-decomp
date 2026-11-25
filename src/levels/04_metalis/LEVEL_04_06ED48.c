/* LEVEL_04:0x06ED48 -- placement copy of LEVEL_22_062480.c: placement copy of LEVEL_01_06D168.c: sweeps a record point along a segment from a start point, moves the record to the hit and fires the next queued effect. */
typedef struct {
    float x;
    float y;
    float z;
} V3;

typedef struct {
    V3 p_00;
    V3 v_0C;
    char pad_18[8];
    float s_20;
} Rec;

typedef struct {
    V3 a;
    V3 b;
    V3 d;
} Seg;

typedef struct {
    char pad_00[0x10];
    int w_10;
    int kind_14;
    char pad_18[8];
} Hit;

typedef struct Obj {
    char pad_000[0x1B0];
    V3 home_1B0;
    char pad_1BC[0x18];
    int fx_1D4[8];
    int w_1F4;
    char pad_1F8[9];
    unsigned char b_201;
    char pad_202[3];
    unsigned char b_205;
    unsigned char b_206;
    char pad_207;
    unsigned char b_208;
    unsigned char b_209;
} Obj;

extern float sqrtf(float x);
extern int func_021138(Seg *s, float *t, Hit *h);
extern void func_1BF9A8(void);
extern void func_0ED460(Rec *r, Hit *h, void *p);
extern char D_00228A10[];

static __inline__ void Copy3(V3 *d, V3 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
}

static __inline__ float Len2(V3 *v)
{
    return v->x * v->x + v->y * v->y + v->z * v->z;
}

static __inline__ float *Min(float *a, float *b)
{
    if (*a < *b)
        return a;
    return b;
}

int func_06ED48(Obj *o, unsigned char a, unsigned char b, unsigned char flag)
{
    Seg s;
    Hit h;
    V3 pt;
    float t;
    float lo;
    float hi;
    Rec *r;
    V3 *start;
    float len;
    float m;
    unsigned int fx;
    float *pick;

    r = (Rec *)((char *)o + b * 0x24);
    if (flag) {
        start = (V3 *)((char *)o + a * 0x24);
        Copy3(&s.a, start);
    } else {
        Copy3(&s.a, &o->home_1B0);
    }
    Copy3(&s.b, &r->p_00);
    s.d.x = s.b.x - s.a.x;
    s.d.y = s.b.y - s.a.y;
    s.d.z = s.b.z - s.a.z;
    o->w_1F4 = 0;
    if (func_021138(&s, &t, &h)) {
        if (h.kind_14 == 2)
            o->w_1F4 = h.w_10;
        o->b_201 = 1;
        if (b != o->b_205) {
            o->b_205 = b;
            o->b_206 = flag + 1;
        }
        pt.x = s.a.x + s.d.x * t;
        pt.y = s.a.y + s.d.y * t;
        pt.z = s.a.z + s.d.z * t;
        Copy3(&r->p_00, &pt);
        if (o->b_208 == 0) {
            fx = (unsigned int)o->fx_1D4;
            if (o->b_209 < 8 && *(int *)(fx + (o->b_209 << 2)) != 0) {
                len = sqrtf(Len2(&r->v_0C));
                lo = len * 0.10000000149011612f + 0.08000000566244125f;
                hi = 0.20000001788139343f;
                pick = Min(&lo, &hi);
                ((void (*)(int, Rec *, Hit *, int, float, float, float, float))func_1BF9A8)(*(int *)(fx + (o->b_209 << 2)), r, &h, 0, r->s_20, *pick, 0.3490658700466156f, 0.4363323152065277f);
                o->b_209 = o->b_209 + 1;
            }
            o->b_208 = 3;
            func_0ED460(r, &h, D_00228A10);
        }
        o->b_208 = o->b_208 - 1;
        return 1;
    }
    return 0;
}
