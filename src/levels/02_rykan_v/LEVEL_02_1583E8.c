/* LEVEL_02:0x1583E8 -- placement copy of LEVEL_01_151B70.c: tests whether a point lies within the squared radius of either reference. */
typedef struct Vec3 { float x,y,z; } Vec3;
typedef struct Object { unsigned char pad[0x30]; Vec3 position; } Object;
extern Object D_0024C650;
extern Vec3 D_002500C8;
extern float D_003A9540;
static inline Vec3 *position(Object *object) { return &object->position; }
static inline float distance_squared(const Vec3 *a, const Vec3 *b)
{
    float x=a->x-b->x, y=a->y-b->y, z=a->z-b->z;
    return x*x+y*y+z*z;
}
int func_1583E8(const Vec3 *point)
{
    float limit = D_003A9540;

    if (distance_squared(position(&D_0024C650), point) < limit) return 1;
    if (distance_squared(&D_002500C8, point) < limit) return 1;
    return 0;
}
