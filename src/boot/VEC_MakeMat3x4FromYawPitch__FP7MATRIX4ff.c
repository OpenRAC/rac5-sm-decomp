extern float sinf(float angle);
extern float cosf(float angle);

void VEC_MakeMat3x4FromYawPitch__FP7MATRIX4ff(float a, float b, float *m)
{
    float f1 = sinf(a);
    float f2 = cosf(a);
    float f3 = sinf(b);
    float f4 = cosf(b);
    float neg1 = -f1;
    float neg3 = -f3;
    float *row0 = m;
    float *row1 = m + 4;
    float *row2 = m + 8;

    row0[0] = f2;
    row0[1] = 0.0f;
    row0[3] = 0.0f;
    row1[0] = f3 * f1;
    row0[2] = neg1;
    row1[2] = f3 * f2;
    row1[1] = f4;
    row1[3] = 0.0f;
    row2[0] = f4 * f1;
    row2[1] = neg3;
    row2[2] = f4 * f2;
    row2[3] = 0.0f;
}
