/* LEVEL_01:0x01A2F0 -- copies four floats of the global vector into the caller's record and returns the fifth. */
extern float D_0022FBB0[];

float func_01A2F0(float *a0)
{
    a0[0] = D_0022FBB0[0];
    a0[1] = D_0022FBB0[1];
    a0[2] = D_0022FBB0[2];
    a0[3] = D_0022FBB0[3];
    return D_0022FBB0[4];
}
