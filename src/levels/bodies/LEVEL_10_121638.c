extern float func_1215E0(void *p);

void func_121638(float *a0)
{
    float s = 1.0f / func_1215E0(a0);

    a0[3] = a0[3] * s;
    a0[0] = a0[0] * s;
    a0[1] = a0[1] * s;
    a0[2] = a0[2] * s;
}
