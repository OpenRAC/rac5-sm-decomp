/* LEVEL_17:0x005780 -- placement copy of LEVEL_01_005B98.c: builds a point at base + camera forward * dist + normalized (camera forward x direction) * side. */

typedef struct Cam {
    char pad_00[0x60];
    float fwd[3];
    char pad_6C[0x21C];
    float dist;
    float side;
} Cam;

extern Cam *D_0018E2DC[1];
extern float sqrtf(float x);
extern void func_005718(int a, int b, float *dir, float);

static __inline__ void Cross(float *o, float *a, float *b)
{
    o[0] = a[1] * b[2] - a[2] * b[1];
    o[1] = a[2] * b[0] - a[0] * b[2];
    o[2] = a[0] * b[1] - a[1] * b[0];
}

static __inline__ void Norm(float *v)
{
    float inv;

    inv = 1.0f / sqrtf(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);
    v[0] = inv * v[0];
    v[1] = inv * v[1];
    v[2] = inv * v[2];
}

static __inline__ void AddScaled(float *o, float *a, float *b, float s)
{
    o[0] = a[0] + b[0] * s;
    o[1] = a[1] + b[1] * s;
    o[2] = a[2] + b[2] * s;
}

void func_005780(float *out, int a, float *base, int b, float *dir)
{
    float c[3];

    ((void (*)(int a, int b, float *dir))func_005718)(a, b, dir);
    Cross(c, D_0018E2DC[0]->fwd, dir);
    Norm(c);
    AddScaled(out, base, D_0018E2DC[0]->fwd, D_0018E2DC[0]->dist);
    AddScaled(out, out, c, D_0018E2DC[0]->side);
}
