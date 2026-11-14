/* LEVEL_09:0x14AB50 -- placement copy of LEVEL_01_151B70.c: tests whether a point lies within the squared radius of either reference. */
typedef struct Vec3 { float x,y,z; } Vec3;
typedef struct Object { unsigned char pad[0x30]; Vec3 position; } Object;
extern Object D_0021C8C0;
extern Vec3 D_00220338;
extern float D_003797A0;
static inline Vec3 *position(Object *object) { return &object->position; }
static inline float distance_squared(const Vec3 *a, const Vec3 *b)
{
    float x=a->x-b->x, y=a->y-b->y, z=a->z-b->z;
    return x*x+y*y+z*z;
}
int func_14AB50(const Vec3 *point)
{
    float limit = D_003797A0;

    if (distance_squared(position(&D_0021C8C0), point) < limit) return 1;
    if (distance_squared(&D_00220338, point) < limit) return 1;
    return 0;
}
