/* LEVEL_08:0x204AE8 -- placement copy of LEVEL_04_1DDB70.c: solves a ballistic flight time to a target height and passes a launch vector to the fire call. */
typedef struct Shot {
    char pad_00[0x18];
    float speed;
} Shot;

typedef struct Holder {
    Shot *shot;
} Holder;

typedef struct Actor {
    char pad_00[0x30];
    float x;
    float y;
    float z;
    char pad_3C[0x58 - 0x3C];
    Holder *holder;
} Actor;

typedef struct Owner {
    char pad_00[0x30];
    float x;
    float y;
    float z;
    char pad_3C[0x58 - 0x3C];
    Holder *holder;
} Owner;

extern float D_002708A8;
extern float sqrtf(float x);
extern int func_233E00(float t);
extern void func_02B1F8(int a, float *p, int b, int c);
extern void func_0379C8(void *o, float *v, float f);

void func_204AE8(Actor *o, int arg1, int arg2, float *f, float h)
{
    Owner *u;
    Shot *s;
    float t;
    float a;
    float b;
    float d;
    float r;
    float dz;
    float v[3];
    float p[3];

    u = (Owner *)((Actor **)o->holder)[0];
    s = ((Holder *)u->holder)->shot;
    dz = h - u->y;
    a = D_002708A8 * 0.5f;
    b = -s->speed;
    d = b * b - a * 4.0f * dz;
    if (!(d < 0.0f)) {
        r = sqrtf(d);
        t = (0.5f / a) * (-b + r);
    }
    func_02B1F8(arg1, p, func_233E00(t), arg2);
    v[0] = p[0] - u->x;
    v[2] = p[1] - u->z;
    v[0] = v[0] * (1.0f / t);
    v[2] = v[2] * (1.0f / t);
    v[1] = s->speed;
    func_0379C8(o, v, *f);
}
