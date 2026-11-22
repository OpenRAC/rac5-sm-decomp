/* LEVEL_08:0x0380C8 -- placement copy of LEVEL_02_038250.c: normalizes the direction into a local vector that the original never passes on, then calls the particle spawner (obj, range, 0) and a second helper. */
typedef struct { float x, y, z; } Vec3;
extern char D_00257868[];
extern char D_00282310[];
extern float sqrtf(float x);
extern void func_0E77F8(void *obj, void *range, void *c);
extern void func_0EB000(void *obj, Vec3 *v, void *tbl, float *f);

void func_0380C8(void *unused, void *obj, Vec3 *v)
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
    func_0E77F8(obj, D_00257868, 0);
    func_0EB000(obj, v, D_00282310, &f);
}
