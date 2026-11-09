/* LEVEL_04:0x0EE4A0 -- placement copy of LEVEL_01_0E89E0.c: spawns the emitter's particles with random direction, color and start value. */
typedef struct Emitter {
    float lo;
    float hi;
    char pad0[0x18];
    unsigned int count;
    int c0;
    int c1;
} Emitter;

typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct Particle {
    void *vtbl;
    int pad4;
    unsigned int color;
    Vec3 pos;
    float value;
    float sinv;
    float cosv;
    Emitter *owner;
} Particle;

typedef struct Pool {
    char pad[0x7C];
    unsigned short kind;
} Pool;

extern char D_000EEB38[];
extern Pool D_002B25C0;
extern int rand(void);
extern float cosf(float);
extern float sqrtf(float);
extern int func_12CE88(int, int, float);
extern Particle *func_096A80(int, int, int, int, int);
extern void func_0EEC70(Particle *);

unsigned int func_0EE4A0(Particle **out, Emitter *e, float *origin)
{
    unsigned int n;
    int mod = 0x2F;
    float minPi = -3.1415927f;
    float twoPi = 6.2831855f;
    Particle *p;
    Particle **dstp = out;
    float *org = origin;
    for (n = 0; n < e->count; ) {
        float ang;
        float c;
        float s;
        float lo;
        float hi;
        float r;
        int col;
        Vec3 *dst;
        p = func_096A80(0, 1, D_002B25C0.kind, 1, 1);
        if (!p) {
            break;
        }
        p->vtbl = D_000EEB38;
        dst = &p->pos;
        dst->x = org[0];
        dst->y = org[1];
        dst->z = org[2];
        p->owner = e;
        ang = (float)rand() * 4.656613e-10f * twoPi + minPi;
        c = cosf(ang);
        s = sqrtf(1.0f - c * c);
        if (ang < 0.0f) {
            s = -s;
        }
        p->sinv = s;
        p->cosv = c;
        n++;
        col = func_12CE88(e->c0, e->c1, (float)rand() * 4.656613e-10f);
        p->color = col | ((rand() % mod + 0x50) << 24);
        lo = e->lo;
        hi = e->hi - lo;
        r = (float)rand() * 4.656613e-10f;
        p->value = lo + hi * r;
        func_0EEC70(p);
        *dstp = p;
        dstp++;
    }
    return n;
}
