/* LEVEL_15.REL:0x005688 -- subtracts the computed vector. */
typedef struct {
    float x;
    float y;
    float z;
} V3;

extern void func_0055B8(float *out, float *b, float s);

void func_005688(V3 *a0, V3 *a1, V3 *a2, float s)
{
    V3 r;

    func_0055B8((float *)&r, (float *)a2, s);
    a0->x = a1->x - r.x;
    a0->y = a1->y - r.y;
    a0->z = a1->z - r.z;
}
