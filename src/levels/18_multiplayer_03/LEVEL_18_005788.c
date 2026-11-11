/* LEVEL_18:0x005788 -- subtracts the vector the helper computes from the
   source vector and stores the result in the destination vector. */
extern void func_0056B8(float *out, float *in, float s);

void func_005788(float *out, float *in, void *a2, void *a3, float s)
{
    float v[3];

    func_0056B8((float *)(v), (float *)(a2), s);
    out[0] = in[0] - v[0];
    out[1] = in[1] - v[1];
    out[2] = in[2] - v[2];
}
