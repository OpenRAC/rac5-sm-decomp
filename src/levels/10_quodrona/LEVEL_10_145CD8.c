/* LEVEL_10:0x145CD8 -- builds the unit direction from a transformed point to a position and passes it on. */
typedef struct { float x, y, z; } Vec3;
extern char D_00225C80[];
extern void func_123D68(Vec3 *out, void *a, void *b);
extern void func_145E28(void *a, Vec3 *p, Vec3 *dir);
extern float sqrtf(float x);
void func_145CD8(void *a, void *b, Vec3 *p)
{
    Vec3 v;
    Vec3 d;
    float len, inv;
    func_123D68(&v, a, D_00225C80);
    d.x = p->x - v.x;
    d.y = p->y - v.y;
    d.z = p->z - v.z;
    len = sqrtf(d.x * d.x + d.y * d.y + d.z * d.z);
    inv = 1.0f / len;
    d.x = inv * d.x;
    d.y = inv * d.y;
    d.z = inv * d.z;
    func_145E28(b, &v, &d);
}
