/* LEVEL_08:0x13A840 -- rotates a vector pair: out0 = s*a + c*b, out1 = s*b - c*a. */
void func_13A840(float *o0, float *o1, const float *a, const float *b, float c, float s)
{
    float ax = a[0], ay = a[1], az = a[2];
    float bx = b[0], by = b[1], bz = b[2];

    o0[0] = s * ax + c * bx;
    o0[1] = s * ay + c * by;
    o0[2] = s * az + c * bz;
    o1[0] = s * bx - c * ax;
    o1[1] = s * by - c * ay;
    o1[2] = s * bz - c * az;
}
