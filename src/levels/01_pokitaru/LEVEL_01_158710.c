/* LEVEL_01:0x158710 -- gives a new particle-style object a random life rate, a random frame and a random direction scaled by a random length. */
typedef struct {
    char pad00[0x30];
    float v[3];
    char pad3C[0x68 - 0x3C];
    float f68;
    short s6C;
} State;

typedef struct {
    char pad00[0x54];
    State *state;
} Obj;

extern int rand(void);
extern float cosf(float x);
extern float sqrtf(float x);

static __inline__ void Scale3(float *v, float k)
{
    v[0] = v[0] * k;
    v[1] = v[1] * k;
    v[2] = v[2] * k;
}

static __inline__ int RandMod(int n)
{
    return rand() % n;
}

void func_158710(Obj *obj)
{
    State *st;
    float phi;
    float c;
    float s;
    float t;
    float r;
    float *v;
    float half;

    st = obj->state;
    v = st->v;
    st->f68 = (float)rand() * 4.656612873077393e-10f * 0.023333333432674408f + 0.010000000707805157f;
    st->s6C = RandMod(6) + 9;
    v[2] = (float)rand() * 9.313225746154785e-10f - 1.0f;
    phi = (float)rand() * 2.925836239953128e-09f - 3.1415927410125732f;
    c = cosf(phi);
    s = sqrtf(1.0f - c * c);
    if (phi < 0.0f)
        s = -s;
    t = sqrtf(1.0f - v[2] * v[2]);
    v[0] = c * t;
    v[1] = s * t;
    half = 0.5f;
    r = (float)rand() * 4.656612873077393e-10f * half;
    Scale3(v, r);
}
