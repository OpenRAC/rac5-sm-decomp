/* LEVEL_20.REL:0x005670 -- adds the three floats func_005608 leaves in the
   stack scratch record to the second vector and stores the sum field by field
   into the first. */
typedef struct {
    float x;
    float y;
    float z;
} Vec;

extern void func_005608(float *out, float *in, float s);

void func_005670(Vec *a0, Vec *a1, void *a2, float s)
{
    Vec t;

    func_005608((float *)(&t), (float *)(a2), s);
    a0->x = a1->x + t.x;
    a0->y = a1->y + t.y;
    a0->z = a1->z + t.z;
}
