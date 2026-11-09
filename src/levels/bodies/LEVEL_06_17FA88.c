/* LEVEL_06:0x17FA88 -- nudges a position and velocity pair then calls two helpers. */

void func_11A6F8(float *out, float *w);
void func_11BF00(void *a0, void *a1, float *out);

void func_17FA88(float *s0, float *v, float *w)
{
    float tmp[12];
    float *v3;

    v3 = s0 + 12;
    v[1] = v[1] - 0.01f;
    s0[12] = s0[12] + v[0];
    v3[1] = v3[1] + v[1];
    v3[2] = v3[2] + v[2];
    func_11A6F8(tmp, w);
    func_11BF00(s0, s0, tmp);
}
