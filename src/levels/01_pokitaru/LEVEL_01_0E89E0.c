/* LEVEL_01:0x0E89E0 -- spawns the emitter's particles with random direction, color and start value. */
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

extern char D_000E9078[];
extern Pool D_00297DC0;
extern int rand(void);
extern float cosf(float);
extern float sqrtf(float);
extern int func_120FB8(int, int, float);
extern Particle *func_093988(int, int, int, int, int);
extern void func_0E91B0(Particle *);

unsigned int func_0E89E0(Particle **out, Emitter *e, float *origin)
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
        p = func_093988(0, 1, D_00297DC0.kind, 1, 1);
        if (!p) {
            break;
        }
        p->vtbl = D_000E9078;
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
        col = func_120FB8(e->c0, e->c1, (float)rand() * 4.656613e-10f);
        p->color = col | ((rand() % mod + 0x50) << 24);
        lo = e->lo;
        hi = e->hi - lo;
        r = (float)rand() * 4.656613e-10f;
        p->value = lo + hi * r;
        func_0E91B0(p);
        *dstp = p;
        dstp++;
    }
    return n;
}
