/* LEVEL_10.REL:0x122030 -- hands the three floats of the vector and the
   caller's factor to the transform routine. */
typedef struct {
    float x;
    float y;
    float z;
} Vec;

void func_121F20(int a0, float x, float y, float z, float f);

void func_122030(int a0, Vec *v, float f)
{
    func_121F20(a0, v->x, v->y, v->z, f);
}
