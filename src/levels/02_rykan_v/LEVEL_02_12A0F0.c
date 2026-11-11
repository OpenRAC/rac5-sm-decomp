/* LEVEL_02.REL:0x12A0F0 -- forwards the record, the three floats of the vector
   and the incoming scale to func_129FE0. */
typedef struct {
    float x;
    float y;
    float z;
} Vec;

extern void func_129FE0(void *a0, float x, float y, float z, float w);

void func_12A0F0(void *a0, Vec *a1, float w)
{
    func_129FE0(a0, a1->x, a1->y, a1->z, w);
}
