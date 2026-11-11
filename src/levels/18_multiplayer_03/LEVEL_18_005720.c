/* LEVEL_18.REL:0x005720 -- adds the computed vector. */
typedef struct {
    float x;
    float y;
    float z;
} V3;

extern void func_0056B8(float *out, float *in, float s);

void func_005720(V3 *a0, V3 *a1, V3 *a2, float s)
{
    V3 r;

    func_0056B8((float *)(&r), (float *)(a2), s);
    a0->x = a1->x + r.x;
    a0->y = a1->y + r.y;
    a0->z = a1->z + r.z;
}
