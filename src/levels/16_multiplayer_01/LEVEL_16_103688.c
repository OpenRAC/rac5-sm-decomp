/* LEVEL_16:103688 -- hands the three floats of the vector and the extra one to
   func_103578. */
void func_103578(int a0, float f12, float f13, float f14, float f15);

void func_103688(int a0, float *a1, float x)
{
    func_103578(a0, a1[0], a1[1], a1[2], x);
}
