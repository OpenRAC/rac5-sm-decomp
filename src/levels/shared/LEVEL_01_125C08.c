/* LEVEL_01:0x125C08 -- matrix * vector, result written to the first argument. */
typedef struct {
    float x;
    float y;
    float z;
} V3;

void func_125C08(V3 *out, float *m, V3 *v)
{
    V3 r;

    r.x = v->x * m[0] + v->y * m[3] + v->z * m[6];
    r.y = v->x * m[1] + v->y * m[4] + v->z * m[7];
    r.z = v->x * m[2] + v->y * m[5] + v->z * m[8];
    *out = r;
}
