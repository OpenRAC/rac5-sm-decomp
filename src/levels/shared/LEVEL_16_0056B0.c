/* LEVEL_16:0x0056B0 -- adds a computed vector to another vector. */
typedef struct {
    float x;
    float y;
    float z;
} V3;

extern void func_005648(float *out, float *in, float s);

void func_0056B0(V3 *out, V3 *a, V3 *b, float s)
{
    V3 tmp;

    func_005648((float *)&tmp, (float *)b, s);
    out->x = a->x + tmp.x;
    out->y = a->y + tmp.y;
    out->z = a->z + tmp.z;
}
