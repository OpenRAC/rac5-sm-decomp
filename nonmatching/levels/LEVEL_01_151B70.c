/* USA LEVEL_01.REL:0x151B70, 176-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 176 linked bytes; first differing word +0xC.
 * Unaccepted; no matching credit. Recover the persistent squared-radius and input-y float live ranges; the object-position accessor already restores the complete body size.
 */
/* Test whether a point is within the squared radius of either reference. */
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
    if (distance_squared(position(&D_00235140), point) < D_00392020) return 1;
    if (distance_squared(&D_00238BB8, point) < D_00392020) return 1;
    return 0;
}
