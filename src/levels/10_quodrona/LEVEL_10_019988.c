/* LEVEL_10:0x019988 -- placement copy of LEVEL_01_01A2F0.c: copies four floats of the global vector into the caller's record and returns the fifth. */
extern float D_00238FB0[];

float func_019988(float *a0)
{
    a0[0] = D_00238FB0[0];
    a0[1] = D_00238FB0[1];
    a0[2] = D_00238FB0[2];
    a0[3] = D_00238FB0[3];
    return D_00238FB0[4];
}
