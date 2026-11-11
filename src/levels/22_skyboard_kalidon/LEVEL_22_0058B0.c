/* LEVEL_22.REL:0x0058B0 -- subtracts the computed vector. */
typedef struct {
    float x;
    float y;
    float z;
} V3;

extern void func_0057E0(float *out, float *in, float s);

void func_0058B0(V3 *a0, V3 *a1, V3 *a2, float s)
{
    V3 r;

    func_0057E0((float *)(&r), (float *)(a2), s);
    a0->x = a1->x - r.x;
    a0->y = a1->y - r.y;
    a0->z = a1->z - r.z;
}
