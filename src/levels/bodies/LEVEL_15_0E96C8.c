/* LEVEL_15:0x0E96C8 -- copies nine floats from the record *a1 into the
   record *a0, the middle and last rows through sub-pointers. */
void func_0E96C8(float *a0, float *a1)
{
    float *v0 = a1 + 3;
    float *v1 = a0 + 3;
    float *v2 = a1 + 6;
    float *v3 = a0 + 6;
    a0[0] = a1[0];
    a0[1] = a1[1];
    a0[2] = a1[2];
    a0[3] = a1[3];
    v1[1] = v0[1];
    v1[2] = v0[2];
    a0[6] = a1[6];
    v3[1] = v2[1];
    v3[2] = v2[2];
}
