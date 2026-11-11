/* LEVEL_16:0x00D1A0 -- placement copy of LEVEL_01_00D5C8.c: writes a direction built from a cosine/sine pair and two stored basis rows. */
typedef struct {
    char pad0[0x54];
    float m[9];
    char pad78[0x14C - 0x78];
    float angle;
} G;
extern G *D_0019ACDC;
extern float cosf(float x);
extern float sqrtf(float x);

void func_00D1A0(float *out)
{
    G *g = D_0019ACDC;
    float *m = g->m;
    float x = g->angle;
    float c = cosf(x);
    float s = sqrtf(1.0f - c * c);
    if (x < 0.0f)
        s = -s;
    out[0] = -c * m[0] - s * m[6];
    out[1] = -c * m[1] - s * m[7];
    out[2] = -c * m[2] - s * m[8];
}
