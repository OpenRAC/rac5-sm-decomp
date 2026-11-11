/* LEVEL_23.REL:0x114BD0 -- forwards the record, the three floats of the vector
   and the incoming scale to func_114AC0. */
typedef struct {
    float x;
    float y;
    float z;
} Vec;

extern void func_114AC0(void *a0, float x, float y, float z, float w);

void func_114BD0(void *a0, Vec *a1, float w)
{
    func_114AC0(a0, a1->x, a1->y, a1->z, w);
}
