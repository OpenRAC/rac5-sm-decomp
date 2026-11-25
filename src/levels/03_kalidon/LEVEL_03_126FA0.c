/* LEVEL_03:0x126FA0 -- placement copy of LEVEL_01_128D38.c: scales the nine floats at a0 in place by the three multipliers m0, m1, m2 (cycled). */
void func_126FA0(float *a0, int unused, float m0, float m1, float m2)
{
    float v0 = a0[0] * m0;
    float v1 = a0[1] * m1;
    float v2 = a0[2] * m2;
    float v3 = a0[3] * m0;
    float v4 = a0[4] * m1;
    float v5 = a0[5] * m2;
    float v6 = a0[6] * m0;
    float v7 = a0[7] * m1;
    float v8 = a0[8] * m2;
    a0[0] = v0;
    a0[1] = v1;
    a0[2] = v2;
    a0[3] = v3;
    a0[4] = v4;
    a0[5] = v5;
    a0[6] = v6;
    a0[7] = v7;
    a0[8] = v8;
}
