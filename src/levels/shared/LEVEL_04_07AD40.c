/* LEVEL_04:0x07AD40 -- writes a random point around a center within a radius. */
extern int rand(void);
extern float cosf(float x);
extern float sinf(float x);

typedef struct {
    float x, y, z;
} Vec3_t;

void func_07AD40(Vec3_t *out, Vec3_t *center, float radius)
{
    Vec3_t v;
    float ang, r;

    ang = (float)rand();
    ang = ang * 4.656612873077393e-10f;
    ang = ang + ang;
    ang = ang * 3.1415927410125732f;
    v.x = cosf(ang);
    v.z = sinf(ang);
    v.y = 0.0f;
    r = (float)rand() * 4.6566123179658803e-10f * radius;
    v.x = v.x * r;
    v.y = v.y * r;
    v.z = v.z * r;
    out->x = center->x + v.x;
    out->y = center->y + v.y;
    out->z = center->z + v.z;
}
