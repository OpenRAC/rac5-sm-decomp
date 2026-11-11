/* LEVEL_05:0x11A750 -- placement copy of LEVEL_15_0E2650.c: builds two local transformed vectors from a pair of inputs and forwards them to two helpers. */

void func_122F80(float *a0, float *a1, float *a2);
void func_122278(float *a0, float *a1, int a2);
void func_121278(char *a0, char *a1, float *a2);

void func_11A750(char *a0, char *a1, float *a2, float *a3)
{
    float m[16];
    float out[16];
    float *r2;

    func_122F80(&m[0], &m[4], a3);
    r2 = &m[8];
    r2[0] = a3[0];
    r2[1] = a3[1];
    r2[2] = a3[2];
    m[12] = a2[0];
    m[13] = a2[1];
    m[14] = a2[2];
    func_122278(out, m, 0);
    func_121278(a0, a1, out);
}
