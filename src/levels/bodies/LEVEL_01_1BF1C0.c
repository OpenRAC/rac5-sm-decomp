/* LEVEL_01:0x1BF1C0 -- builds a three-float vector, runs two pairs of helper calls on it, and rebuilds the vector for the second pair. */
extern void func_125E78(float *a0, char *a1, float *a2);
extern void func_1BF288(char *a0, float *a1, char *a2);

void func_1BF1C0(char *a0, char *a1)
{
    float v[3];

    v[0] = -0.6079999804496765f;
    v[1] = 1.3040000200271606f;
    v[2] = 1.1490000486373901f;
    func_125E78(v, a0, v);
    func_1BF288(a0, v, a1);
    v[0] = 0.5879999995231628f;
    v[1] = 1.2740000486373901f;
    v[2] = 1.1490000486373901f;
    func_125E78(v, a0, v);
    func_1BF288(a0, v, a1);
}
