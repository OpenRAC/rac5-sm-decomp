/* LEVEL_01:0x0136A0 -- copies four floats from a source block, or a default block, into a 4x4 float block and fills the remaining slots. */

extern float D_00217E78[];

void func_0136A0(float *a0, float *a1, float f12, float f13, float f14)
{
    float f;
    float g;
    float h;
    float k;
    float z;

    if (a1 == 0) {
        a1 = D_00217E78;
    }
    f = a1[0];
    z = 0.0f;
    a0[4] = f;
    a0[0] = f;
    g = a1[1];
    a0[5] = g;
    a0[1] = g;
    h = a1[2];
    a0[6] = h;
    a0[2] = h;
    k = a1[3];
    a0[7] = k;
    a0[3] = k;
    a0[11] = z;
    a0[10] = z;
    a0[9] = z;
    a0[8] = z;
    a0[12] = f12;
    a0[13] = f13;
    a0[14] = f14;
}
