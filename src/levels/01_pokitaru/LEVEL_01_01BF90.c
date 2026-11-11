/* LEVEL_01:0x01BF90 -- quadratic form: sqrt of (dot^2 + c - |d|^2) minus the
   dot product, with the direction taken from a0 relative to a2. */
typedef struct {
    float x;
    float y;
    float z;
} VEC3;

float sqrtf(float x);

float func_01BF90(VEC3 *a0, VEC3 *a1, VEC3 *a2, float c)
{
    float dx;
    float dy;
    float dz;
    float dot;
    float len2;

    dx = a0->x - a2->x;
    dy = a0->y - a2->y;
    dz = a0->z - a2->z;
    dot = a1->x * dx + a1->y * dy + a1->z * dz;
    len2 = dx * dx + dy * dy + dz * dz;
    return -sqrtf(dot * dot + c - len2) - dot;
}
