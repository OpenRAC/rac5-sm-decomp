/* LEVEL_08.REL:0x001DD8 -- adds the three floats func_001D90 leaves in the
   stack scratch record to the source vector and stores the sum field by
   field into the destination vector. */
typedef struct {
    float x;
    float y;
    float z;
} Vec;

extern void func_001D90(Vec *out, char *sub, float p, float q, float r, float s);

void func_001DD8(Vec *a0, char *sub, Vec *a2, float p, float q, float r, float s)
{
    Vec t;

    func_001D90(&t, sub, p, q, r, s);
    a0->x = a2->x + t.x;
    a0->y = a2->y + t.y;
    a0->z = a2->z + t.z;
}
