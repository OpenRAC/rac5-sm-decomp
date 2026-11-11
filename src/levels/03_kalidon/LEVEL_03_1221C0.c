typedef struct { float m[16]; } Matrix;
extern float sinf(float);
extern float cosf(float);

void func_1221C0(Matrix *matrix, float angle)
{
    float sine = sinf(angle);
    float cosine = cosf(angle);
    matrix->m[0] = cosine;
    matrix->m[1] = 0.0f;
    matrix->m[2] = -sine;
    matrix->m[3] = 0.0f;
    matrix->m[4] = 0.0f;
    matrix->m[5] = 1.0f;
    matrix->m[6] = 0.0f;
    matrix->m[7] = 0.0f;
    matrix->m[8] = sine;
    matrix->m[9] = 0.0f;
    matrix->m[10] = cosine;
    matrix->m[11] = 0.0f;
    matrix->m[12] = 0.0f;
    matrix->m[13] = 0.0f;
    matrix->m[14] = 0.0f;
    matrix->m[15] = 1.0f;
}
