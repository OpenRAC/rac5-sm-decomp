/* LEVEL_22:0x0FD2E8 -- placement copy of LEVEL_01_124138.c: fills a 3x3 matrix with the rotation by the float argument about the third axis. */
extern float sinf(float a0);
extern float cosf(float a0);

void VEC_ConstructRotZMat3__FP7MATRIX3f(float *m, float angle)
{
    float s = sinf(angle);
    float c = cosf(angle);

    m[0] = c;
    m[1] = s;
    m[2] = 0.0f;
    m[3] = -s;
    m[4] = c;
    m[5] = 0.0f;
    m[6] = 0.0f;
    m[7] = 0.0f;
    m[8] = 1.0f;
}
