/* LEVEL_16:0x005718 -- asks func_005648 for three floats and stores the
   difference with the three floats of the first argument. */
extern void func_005648(float *out, float *a2, float s);

void func_005718(void *a0, void *a1, void *a2, float s)
{
    float *s0;
    float *s1;
    float t[3];

    s0 = (float *)a1;
    s1 = (float *)a0;
    func_005648(t, (float *)a2, s);
    s1[0] = s0[0] - t[0];
    s1[1] = s0[1] - t[1];
    s1[2] = s0[2] - t[2];
}
