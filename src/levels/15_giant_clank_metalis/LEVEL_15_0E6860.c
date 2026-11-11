/* LEVEL_15:0x0E6860 -- generates a random point inside a unit sphere from a chained float generator. */
typedef struct { float x, y, z; } V3;
extern int rand(void);
extern float cosf(float x);
extern float sqrtf(float x);

static __inline__ float step(float s)
{
    float hi;

    hi = (int)(s * 7.826379260222893e-06f);
    return __builtin_fabsf((s - hi * 127773.0f) * 16807.0f - hi * 2836.0f);
}

void func_0E6860(V3 *out)
{
    float s0;
    float s1;
    float s2;
    float z;
    float phi;
    float u;
    float c;
    float sn;
    float r;
    float k;
    float x;
    float y;

    s0 = (float)rand();
    z = s0 * 9.313225746154785e-10f + -1.0f;
    s1 = step(s0);
    phi = s1 * 2.925836239953128e-09f + -3.1415927410125732f;
    s2 = step(s1);
    u = s2 * 4.656612873077393e-10f;
    c = cosf(phi);
    sn = sqrtf(1.0f - c * c);
    if (phi < 0.0f)
        sn = -sn;
    r = sqrtf(1.0f - z * z);
    x = c * r;
    y = sn * r;
    k = sqrtf(u);
    out->x = x * k;
    out->y = y * k;
    out->z = z * k;
}
