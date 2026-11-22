/* LEVEL_02:0x038250 -- normalizes the direction into a local vector that the original never passes on, then calls the particle spawner (obj, range, 0) and a second helper. */
typedef struct { float x, y, z; } Vec3;
extern char D_00222B68[];
extern char D_0024A590[];
extern float sqrtf(float x);
extern void func_0E31B8(void *obj, void *range, void *c);
extern void func_0E69C0(void *obj, Vec3 *v, void *tbl, float *f);

void func_038250(void *unused, void *obj, Vec3 *v)
{
    float f = 10.0f;
    float inv;
    float len2;
    Vec3 d;

    len2 = v->x * v->x + v->y * v->y + v->z * v->z;
    inv = 1.0f / sqrtf(len2);
    d.x = inv * v->x;
    d.y = inv * v->y;
    d.z = inv * v->z;
    func_0E31B8(obj, D_00222B68, 0);
    func_0E69C0(obj, v, D_0024A590, &f);
}
