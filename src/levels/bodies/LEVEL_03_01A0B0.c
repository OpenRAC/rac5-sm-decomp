/* LEVEL_03.REL:0x01A0B0 -- copies the four-word default block onto the caller. */
extern float D_0024A9E0[];

void func_01A0B0(float *a0)
{
    a0[0] = D_0024A9E0[0];
    a0[1] = D_0024A9E0[1];
    a0[2] = D_0024A9E0[2];
    a0[3] = D_0024A9E0[3];
}
