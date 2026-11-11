/* LEVEL_18.REL:0x101EC0 -- hands the three floats of the vector and the
   caller's factor to the transform routine. */
typedef struct {
    float x;
    float y;
    float z;
} Vec;

void func_101DB0(int a0, float x, float y, float z, float f);

void func_101EC0(int a0, Vec *v, float f)
{
    func_101DB0(a0, v->x, v->y, v->z, f);
}
