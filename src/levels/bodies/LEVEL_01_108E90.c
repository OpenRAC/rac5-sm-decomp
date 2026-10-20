/* LEVEL_01:0x108E90 -- copies one float from another vector. */
void func_108E90(float *p, float a, float *q)
{
    p[0] = a;
    p[1] = q[0];
}
