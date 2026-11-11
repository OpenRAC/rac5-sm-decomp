/* LEVEL_01:0x1231B8 -- dot product of two 4-float vectors. */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} V4;

float func_1231B8(V4 *a0, V4 *a1)
{
    float t0 = a0->x * a1->x;
    float t1 = a0->y * a1->y;
    float t2 = a0->z * a1->z;
    float t3 = a0->w * a1->w;
    return t0 + t1 + t2 + t3;
}
