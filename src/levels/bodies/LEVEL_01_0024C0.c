extern void func_000000(float a, float b);

void func_0024C0(float *a0, float *a1)
{
    float *r = a1 + 6;
    float d0 = a0[0] * a1[0] + a0[1] * a1[1] + a0[2] * a1[2];
    float d1 = a0[0] * r[0] + a0[1] * r[1] + a0[2] * r[2];

    func_000000(-d1, -d0);
}
