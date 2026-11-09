/* LEVEL_01:0x1656C8 -- renormalizes the three basis vectors to the length stored in the shared data block. */
typedef struct Vec4 {
    float x;
    float y;
    float z;
    float w;
} Vec4;

typedef struct Scale {
    int pad;
    float len;
} Scale;

typedef struct Basis {
    Vec4 a;
    Vec4 b;
    Vec4 c;
    char pad[0x58 - 0x30];
    Scale *scale;
} Basis;

float sqrtf(float x);

static inline void Renorm(Vec4 *v, Scale *s)
{
    float len2;
    float len;
    float f;
    len = s->len;
    len2 = v->x * v->x + v->y * v->y + v->z * v->z;
    if (!(len2 < 2.384185791015625e-07f)) {
        f = len / sqrtf(len2);
        v->x *= f;
        v->y *= f;
        v->z *= f;
    }
}

void func_1656C8(Basis *o)
{
    Scale *s = o->scale;
    Renorm(&o->c, s);
    Renorm(&o->b, s);
    Renorm(&o->a, s);
}
