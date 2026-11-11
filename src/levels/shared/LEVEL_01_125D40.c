/* LEVEL_01:0x125D40 -- matrix/vector product: the result vector is
   built on the stack and copied out in one block. */
typedef struct {
    float v[3];
} Vec3;

typedef struct {
    float m[3][4];
} Mat3;

void func_125D40(Vec3 *out, Mat3 *a, Vec3 *b)
{
    Vec3 r;

    r.v[0] = b->v[0] * a->m[0][0] + b->v[1] * a->m[1][0]
           + b->v[2] * a->m[2][0];
    r.v[1] = b->v[0] * a->m[0][1] + b->v[1] * a->m[1][1]
           + b->v[2] * a->m[2][1];
    r.v[2] = b->v[0] * a->m[0][2] + b->v[1] * a->m[1][2]
           + b->v[2] * a->m[2][2];
    *out = r;
}
