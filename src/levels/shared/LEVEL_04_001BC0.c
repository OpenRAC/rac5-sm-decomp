typedef struct { float x, y, z; } Vec3;

extern void func_001B78(float *out, char *sub, float p, float q, float r, float s);

void func_001BC0(Vec3 *dst, char *sub, Vec3 *src, float p, float q, float r, float s)
{
    float t[3];

    func_001B78(t, sub, p, q, r, s);
    dst->x = src->x + t[0];
    dst->y = src->y + t[1];
    dst->z = src->z + t[2];
}
