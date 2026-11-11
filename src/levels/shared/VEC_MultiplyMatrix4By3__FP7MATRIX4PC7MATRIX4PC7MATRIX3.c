/* LEVEL_01:0x1259F0 -- multiplies the 3x3 rotation parts of two matrices into a 4x4 and copies the rest. */
void VEC_MultiplyMatrix4By3__FP7MATRIX4PC7MATRIX4PC7MATRIX3(float *o, float *a, float *b)
{
    float t[12];

    t[0] = a[0] * b[0] + a[1] * b[3] + a[2] * b[6];
    t[1] = a[0] * b[1] + a[1] * b[4] + a[2] * b[7];
    t[2] = a[0] * b[2] + a[1] * b[5] + a[2] * b[8];
    t[4] = a[4] * b[0] + a[5] * b[3] + a[6] * b[6];
    t[5] = a[4] * b[1] + a[5] * b[4] + a[6] * b[7];
    t[6] = a[4] * b[2] + a[5] * b[5] + a[6] * b[8];
    t[8] = a[8] * b[0] + a[9] * b[3] + a[10] * b[6];
    t[9] = a[8] * b[1] + a[9] * b[4] + a[10] * b[7];
    t[10] = a[8] * b[2] + a[9] * b[5] + a[10] * b[8];
    o[0] = t[0];
    o[1] = t[1];
    o[2] = t[2];
    o[3] = a[3];
    o[4] = t[4];
    o[5] = t[5];
    o[6] = t[6];
    o[7] = a[7];
    o[8] = t[8];
    o[9] = t[9];
    o[10] = t[10];
    o[7] = a[7];
    o[12] = a[12];
    o[13] = a[13];
    o[14] = a[14];
    o[15] = a[15];
}
