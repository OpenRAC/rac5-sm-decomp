/* LEVEL_15:0x091EA8 -- copy a three-float vector into a global vector. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern Vec3 D_00150DF0;

void func_091EA8(Vec3 *src)
{
    D_00150DF0.x = src->x;
    D_00150DF0.y = src->y;
    D_00150DF0.z = src->z;
}
