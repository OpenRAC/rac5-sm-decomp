/* LEVEL_15:139F10 -- runs the same step on the three consecutive floats of
   the two vectors. */
void func_139ED0(float *a0, float *a1, float x);

void func_139F10(float *a0, float *a1, float x)
{
    func_139ED0(a0, a1, x);
    func_139ED0(a0 + 1, a1 + 1, x);
    func_139ED0(a0 + 2, a1 + 2, x);
}
