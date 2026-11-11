/* LEVEL_15:0x0E2650 -- builds two local transformed vectors from a pair of inputs and forwards them to two helpers. */

void func_0EBEC0(float *a0, float *a1, float *a2);
void func_0EB3E0(float *a0, float *a1, int a2);
void func_0EA710(char *a0, char *a1, float *a2);

void func_0E2650(char *a0, char *a1, float *a2, float *a3)
{
    float m[16];
    float out[16];
    float *r2;

    func_0EBEC0(&m[0], &m[4], a3);
    r2 = &m[8];
    r2[0] = a3[0];
    r2[1] = a3[1];
    r2[2] = a3[2];
    m[12] = a2[0];
    m[13] = a2[1];
    m[14] = a2[2];
    func_0EB3E0(out, m, 0);
    func_0EA710(a0, a1, out);
}
