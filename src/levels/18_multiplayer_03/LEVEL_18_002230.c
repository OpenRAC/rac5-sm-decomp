/* LEVEL_18:0x002230 -- placement copy of LEVEL_01_0025C8.c: forwards a scaled setup call, then writes the normalized difference of two vectors. */
typedef struct {
    float x;
    float y;
    float z;
} V3;
typedef struct {
    char pad0[0x54];
    char sub[0x24];
    float f78;
    char pad7C[0x10];
    float f8C;
    char pad90[0x40];
    float fD0;
} G;
extern G *D_0019C15C;
extern float sqrtf(float x);
extern void func_001A20(V3 *dst, char *sub, V3 *src, float p, float q, float r, float s);

void func_002230(V3 *a, V3 *out, V3 *b, float p, float q, float s)
{
    V3 d;
    float len;
    float inv;
    float t = s / D_0019C15C->fD0;

    func_001A20(a, D_0019C15C->sub, b, p, q, D_0019C15C->f78 * t, (D_0019C15C->f8C - 0.30000001192092896f) * t);
    d.x = a->x - b->x;
    d.y = a->y - b->y;
    d.z = a->z - b->z;
    len = sqrtf(d.x * d.x + d.y * d.y + d.z * d.z);
    inv = 1.0f / len;
    out->x = inv * d.x;
    out->y = inv * d.y;
    out->z = inv * d.z;
}
