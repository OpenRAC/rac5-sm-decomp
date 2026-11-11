/* LEVEL_01:0x005AC8 -- adds the vector produced by func_005A60 to the
   caller's second vector and stores the result in the first. */
typedef struct {
    float x;
    float y;
    float z;
} V3;

extern void func_005A60(float *out, float *in, float s);

void func_005AC8(V3 *a0, V3 *a1, V3 *a2, float s)
{
    V3 t;
    func_005A60((float *)&t, (float *)a2, s);
    a0->x = a1->x + t.x;
    a0->y = a1->y + t.y;
    a0->z = a1->z + t.z;
}
