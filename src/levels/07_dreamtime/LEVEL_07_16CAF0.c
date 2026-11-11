/* LEVEL_07:0x16CAF0 -- copies a three-float vector into two slots of the
   destination record. */
void func_16CAF0(float *a0, float *a1)
{
    float *p = a0 + 4;
    float *q = a0 + 8;
    p[0] = a1[0];
    p[1] = a1[1];
    p[2] = a1[2];
    q[0] = a1[0];
    q[1] = a1[1];
    q[2] = a1[2];
}
