/* LEVEL_24.REL:0x119CD8 -- hands the three floats of the vector and the
   caller's factor to the transform routine. */
typedef struct {
    float x;
    float y;
    float z;
} Vec;

void func_119BC8(int a0, float x, float y, float z, float f);

void func_119CD8(int a0, Vec *v, float f)
{
    func_119BC8(a0, v->x, v->y, v->z, f);
}
