/* LEVEL_07:0x1DFD78 -- placement copy of LEVEL_03_1E35C0.c: advances 2D rotation vectors and wrapped UV offsets across two animation tables. */

extern float sqrtf(float x);
extern float fmodf(float x, float y);
extern float floorf(float x);

extern unsigned int D_002082B8;

typedef struct {
    float x;
    float y;
} Vec2;

typedef struct {
    Vec2 a;
    Vec2 b;
    float t;
} StateA;

typedef struct {
    Vec2 a;
    float u;
    float v;
} StateB;

typedef struct {
    unsigned char pad0[0x28];
    float period;
    float speed;
    unsigned char pad30[0x40];
    float cosA;
    float sinA;
    float cosB;
    float sinB;
} DescA;

typedef struct {
    unsigned char pad0[0x14];
    float du;
    float dv;
    unsigned char pad1C[0x10];
    float cosA;
    float sinA;
} DescB;

typedef struct {
    int unk0;
    DescA *descsA;
    unsigned int countA;
    DescB *descsB;
    unsigned int countB;
} Table;

static __inline__ void step_rot(Vec2 *v, float c, float s, int renorm)
{
    float x = v->x;
    float y = v->y;
    float nx = c * x - s * y;
    float ny = c * y + s * x;

    v->y = ny;
    v->x = nx;
    if (renorm == 0) {
        float inv = 1.0f / sqrtf(nx * nx + ny * ny);
        v->x *= inv;
        v->y *= inv;
    }
}

void func_1DFD78(StateA *statesA, StateB *statesB, Table *table)
{
    unsigned int frame = D_002082B8;
    unsigned int countA = table->countA;
    DescA *descsA = table->descsA;
    int renorm = frame & 7;
    unsigned int i;
    unsigned int countB;
    DescB *descsB;

    for (i = 0; i != countA; i++) {
        StateA *st = &statesA[i];
        DescA *descA = &descsA[i];
        step_rot(&st->a, descA->cosA, descA->sinA, renorm);
        renorm--;
        {
            Vec2 *b = &st->b;
            float c = descA->cosB;
            float s = descA->sinB;
            float x = st->b.x;
            float y = b->y;
            float nx = c * x - s * y;
            float ny = c * y + s * x;
            st->b.x = nx;
            b->y = ny;
            if (renorm == 0) {
                float inv = 1.0f / sqrtf(st->b.x * st->b.x + ny * ny);
                st->b.x *= inv;
                b->y *= inv;
            }
        }
        renorm--;
        st->t = fmodf(st->t + descA->speed, descA->period);
    }

    countB = table->countB;
    descsB = table->descsB;
    for (i = 0; i != countB; i++) {
        StateB *st = &statesB[i];
        DescB *descB = &descsB[i];
        float u;
        float v;
        step_rot(&st->a, descB->cosA, descB->sinA, renorm);
        renorm--;
        u = st->u + descB->du;
        st->u = u - floorf(u);
        v = st->v + descB->dv;
        st->v = v - floorf(v);
    }
}
