/* LEVEL_01:0x1264E0 -- fills a 3x3 rotation matrix from two angles. */
extern float sinf(float);
extern float cosf(float);

void VEC_MakeMat3FromYawPitch__FP7MATRIX3ff(float *matrix, float first, float second)
{
    float sin_first = sinf(first);
    float cos_first = cosf(first);
    float sin_second = sinf(second);
    float cos_second = cosf(second);
    float *r1 = matrix + 3;
    float *r2 = matrix + 6;

    matrix[0] = cos_first;
    matrix[1] = 0.0f;
    matrix[2] = -sin_first;
    r1[0] = sin_second * sin_first;
    r1[2] = sin_second * cos_first;
    r1[1] = cos_second;
    r2[0] = cos_second * sin_first;
    r2[1] = -sin_second;
    r2[2] = cos_second * cos_first;
}
