typedef struct { float x, y, z; } Vec3;

extern void func_001B78(float *);

void func_001BC0(Vec3 *dst, int a1, Vec3 *src)
{
    float t[3];

    func_001B78(t);
    dst->x = src->x + t[0];
    dst->y = src->y + t[1];
    dst->z = src->z + t[2];
}
