/* LEVEL_01:0x001DB8 -- adds the three floats the routine computes into the
   three floats of the caller's record. */
extern void func_001D70(float *v);

void func_001DB8(float *a0, void *a1, float *a2)
{
    float v[3];

    func_001D70(v);
    a0[0] = a2[0] + v[0];
    a0[1] = a2[1] + v[1];
    a0[2] = a2[2] + v[2];
}
