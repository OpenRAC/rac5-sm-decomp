typedef struct {
    float x, y, z;
} Vec3;

void func_0EB788(Vec3 *out, void *a1, Vec3 *in, int z);
float sqrtf(float x);
float atan2f(float y, float x);
float asinf(float x);

void func_001D60(Vec3 *a0, void *a1, Vec3 *a2, float *p4, float *p5, float *p6)
{
    Vec3 d;
    Vec3 o;
    float x, y, z;
    float len;

    d.x = a0->x - a2->x;
    d.y = a0->y - a2->y;
    d.z = a0->z - a2->z;
    func_0EB788(&o, a1, &d, 0);
    x = o.x;
    y = o.y;
    z = o.z;
    len = sqrtf(x * x + y * y + z * z);
    *p4 = atan2f(z, x);
    *p5 = -asinf(y / len);
    *p6 = len;
}
