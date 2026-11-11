/* LEVEL_01:0x1277C8 -- builds two orthogonal basis vectors from a direction and an up hint. */
typedef struct { float x, y, z; } V3;
extern float sqrtf(float);

static __inline__ unsigned char Normalize(V3 *v)
{
    float len2, inv;

    len2 = v->x * v->x + v->y * v->y + v->z * v->z;
    if (len2 < 2.3841858e-07f) {
        return 0;
    }
    inv = 1.0f / sqrtf(len2);
    v->x = inv * v->x;
    v->y = inv * v->y;
    v->z = inv * v->z;
    return 1;
}

void func_1277C8(V3 *out1, V3 *out2, V3 *dir, V3 *up, V3 *alt)
{
    V3 a, b;
    float len2, inv;

    a.x = dir->y * up->z - dir->z * up->y;
    a.y = dir->z * up->x - dir->x * up->z;
    a.z = dir->x * up->y - dir->y * up->x;
    if (Normalize(&a)) {
        b.x = a.y * dir->z - a.z * dir->y;
        b.y = a.z * dir->x - a.x * dir->z;
        b.z = a.x * dir->y - a.y * dir->x;
    } else {
        b.x = alt->y * dir->z - alt->z * dir->y;
        b.y = alt->z * dir->x - alt->x * dir->z;
        b.z = alt->x * dir->y - alt->y * dir->x;
        len2 = b.x * b.x + b.y * b.y + b.z * b.z;
        inv = 1.0f / sqrtf(len2);
        b.x = inv * b.x;
        b.y = inv * b.y;
        b.z = inv * b.z;
        a.x = dir->y * b.z - dir->z * b.y;
        a.y = dir->z * b.x - dir->x * b.z;
        a.z = dir->x * b.y - dir->y * b.x;
    }
    out1->x = a.x;
    out1->y = a.y;
    out1->z = a.z;
    out2->x = b.x;
    out2->y = b.y;
    out2->z = b.z;
}
