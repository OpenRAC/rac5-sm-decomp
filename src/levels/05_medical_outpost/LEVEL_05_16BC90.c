/* LEVEL_05:16BC90 -- gathers three floats from the object's two blocks. */
void func_16BC90(char *a0, float *a1)
{
    float *p = *(float **)(a0 + 0x54);
    float *q = *(float **)(a0 + 0x58);

    a1[0] = p[0];
    a1[2] = p[1];
    a1[1] = q[6];
}
