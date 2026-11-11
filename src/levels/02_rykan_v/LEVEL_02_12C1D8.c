/* LEVEL_01:0x125E78 -- transform a point by the level's 4x4 matrix: the
   result is the point put through the linear part and then moved by the
   matrix's translation row. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    float m[16];
} Mat4;

void func_125E78(Vec3 *dst, Mat4 *mat, Vec3 *v)
{
    Vec3 out;

    out.x = v->x * mat->m[0] + v->y * mat->m[4] + v->z * mat->m[8]
            + mat->m[12];
    out.y = v->x * mat->m[1] + v->y * mat->m[5] + v->z * mat->m[9]
            + mat->m[13];
    out.z = v->x * mat->m[2] + v->y * mat->m[6] + v->z * mat->m[10]
            + mat->m[14];

    *dst = out;
}
