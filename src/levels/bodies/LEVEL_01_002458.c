/* LEVEL_01:0x002458 -- multiplies the record's first column by two vectors
   of the argument vector and hands the two results to the erased routine. */
extern void func_000000(float f12, float f13);

void func_002458(float *m, float *v)
{
    float *w = &v[6];
    float r0 = m[0] * v[0] + m[1] * v[1] + m[2] * v[2];
    float r1 = m[0] * w[0] + m[1] * w[1] + m[2] * w[2];

    func_000000(r1, r0);
}
