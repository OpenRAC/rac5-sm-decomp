/* LEVEL_09:0x1A3338 -- advances the object's timer by 1/30 s and, when it passes the record's limit, plays the record's effect, re-arms a random delay and reports the effect point to the global listener. */
typedef struct {
    float limit;
    float base;
    int kind;
} Rec;

typedef struct {
    char pad00[0x14];
    float a;
    float b;
    float c;
    float d;
} Listener;

typedef struct {
    char pad00[0x30];
    float pos[4];
    char pad40[0x14];
    Rec *rec;
    char pad58[0x18];
    float timer;
} Obj;

typedef struct {
    char pad00[0x3C];
} Fx;

extern Fx D_0020FE70[];
extern Listener *D_001F2A5C[1];

extern void func_0D9AD8(float *pos, Fx *fx, int a);
extern int rand(void);
extern void func_07D450(Obj *o, Listener *l, int a2, int a3, int t0, int t1, int t2, int t3, float f12, float f13, float f14, float f15);

void func_1A3338(Obj *o)
{
    Rec *r;
    float t;
    Listener *l;

    r = o->rec;
    o->timer = o->timer + 0.03333333507180214f;
    if (r->limit <= o->timer) {
        func_0D9AD8(o->pos, &D_0020FE70[r->kind], 1);
        t = r->base - 0.0f;
        o->timer = t * ((float)rand() * 4.656612873077393e-10f) + 0.0f;
        l = D_001F2A5C[0];
        if (l != 0) {
            func_07D450(o, l, 0, 0, 0, 0, 0, 1, l->a, l->b, l->c, l->d);
        }
    }
}
