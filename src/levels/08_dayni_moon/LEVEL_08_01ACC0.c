/* LEVEL_08:0x01ACC0 -- placement copy of LEVEL_01_01A2F0.c: copies four floats of the global vector into the caller's record and returns the fifth. */
extern float D_0027EE30[];

float func_01ACC0(float *a0)
{
    a0[0] = D_0027EE30[0];
    a0[1] = D_0027EE30[1];
    a0[2] = D_0027EE30[2];
    a0[3] = D_0027EE30[3];
    return D_0027EE30[4];
}
