/* LEVEL_16:0x1679A8 -- picks two random unit directions and clears the related fields. */
typedef struct P {
    char pad0[0x10];
    float v1[3];
    float f1C;
    float v2[3];
    float f2C;
    float f30;
    float f34;
    float f38;
} P;
typedef struct Obj { char pad0[0x58]; P *p; } Obj;

extern int rand(void);
extern float cosf(float x);
extern float sqrtf(float x);

static inline void randdir(float *v)
{
    float c;
    float s;
    float th;
    float r;

    v[2] = (float)rand() * 9.313226e-10f - 1.0f;
    th = (float)rand() * 2.9258362e-9f - 3.1415927f;
    c = cosf(th);
    s = sqrtf(1.0f - c * c);
    if (th < 0.0f)
        s = -s;
    r = sqrtf(1.0f - v[2] * v[2]);
    v[0] = c * r;
    v[1] = s * r;
}

void func_1679A8(Obj *o)
{
    P *p;
    float *w;

    p = o->p;
    randdir(p->v1);
    randdir(p->v2);
    p->f2C = 0.0f;
    w = &p->f2C;
    w[1] = 0.0f;
    w[2] = 0.0f;
    p->f1C = 0.0f;
    p->f38 = 0.0f;
}
