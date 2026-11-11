/* LEVEL_21:0x0E8C18 -- placement copy of LEVEL_01_123250.c. */
extern float func_0E8BC0(void *p);

void func_0E8C18(float *a0)
{
    float s = 1.0f / func_0E8BC0(a0);

    a0[3] = a0[3] * s;
    a0[0] = a0[0] * s;
    a0[1] = a0[1] * s;
    a0[2] = a0[2] * s;
}
