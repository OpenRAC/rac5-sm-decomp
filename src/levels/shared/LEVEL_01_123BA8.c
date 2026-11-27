/* LEVEL_01:0x123BA8 -- copies the four rows of a 4x4 matrix into a 4x3 matrix. */

typedef struct Vec3 {
    float x, y, z;
} Vec3;

typedef struct Vec4 {
    float x, y, z, w;
} Vec4;

static __inline__ void copy_row(Vec3 *dst, Vec4 *src)
{
    dst->x = src->x;
    dst->y = src->y;
    dst->z = src->z;
}

void func_123BA8(Vec3 *dst, Vec4 *src)
{
    copy_row(&dst[0], &src[0]);
    copy_row(&dst[1], &src[1]);
    copy_row(&dst[2], &src[2]);
    copy_row(&dst[3], &src[3]);
}
