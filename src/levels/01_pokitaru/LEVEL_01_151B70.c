/* LEVEL_01:0x151B70 -- tests whether a point lies within the squared radius of either reference. */
typedef struct Vec3 { float x,y,z; } Vec3;
typedef struct Object { unsigned char pad[0x30]; Vec3 position; } Object;
extern Object D_00235140;
extern Vec3 D_00238BB8;
extern float D_00392020;
static inline Vec3 *position(Object *object) { return &object->position; }
static inline float distance_squared(const Vec3 *a, const Vec3 *b)
{
    float x=a->x-b->x, y=a->y-b->y, z=a->z-b->z;
    return x*x+y*y+z*z;
}
int func_151B70(const Vec3 *point)
{
    float limit = D_00392020;

    if (distance_squared(position(&D_00235140), point) < limit) return 1;
    if (distance_squared(&D_00238BB8, point) < limit) return 1;
    return 0;
}
