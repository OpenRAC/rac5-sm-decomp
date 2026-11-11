/* LEVEL_15:0x104340 -- method thunk: steps back to the owning object, asks a first helper with the squared and plain length of the first matrix row and the bounds of the global body, and only when it passes forwards everything to a second helper together with the global record word. */
typedef struct Body {
    char pad00[0x34];
    float mn[3];
    float mx[3];
} Body;

typedef struct Obj {
    float m[12];
} Obj;

extern float sqrtf(float x);
extern Body *D_002EDA40;
extern int D_002F3E14;
extern int func_0E1A68(float *a0, float *a1, float *a2, float *a3, float *t0, float *t1,
                       float *t2, float *t3, float f12, float f13, float f14);
extern int func_0DB078(void *a0, void *a1, void *a2, void *a3, void *t0, void *t1,
                       float f12, float f13, void *t2, void *t3, int s0);

unsigned char func_104340(void *a0, void *a1, void *a2, void *a3, char *sub, float *p5, float *p6,
                          float f12, float f13)
{
    Obj *o;
    Body *body;
    float *mn;
    float *mx;
    float len2;
    float len;
    int r;

    o = (Obj *)(sub - 0x368);
    body = D_002EDA40;
    mn = body->mn;
    mx = body->mx;
    len2 = o->m[0] * o->m[0] + o->m[1] * o->m[1] + o->m[2] * o->m[2];
    len = sqrtf(len2);
    if ((unsigned char)func_0E1A68(mn, mx, o->m, o->m + 3, o->m + 6, o->m + 9, p5, p6, f12, len2,
                                   f13 * len) == 0) {
        r = 0;
    } else {
        r = func_0DB078(a0, a1, a2, a3, p5, p6, f12, f13, body, o, D_002F3E14);
    }
    return r;
}
