/* VEC_ConstructRotZMat3__FP7MATRIX3f -- builds a rotation about the Z axis as a 3x3 matrix. */
typedef struct {
    float m[9];
} MATRIX3;

extern float sinf(float x);
extern float cosf(float x);

void VEC_ConstructRotZMat3__FP7MATRIX3f(MATRIX3 *out, float angle) {
    float s = sinf(angle);
    float c = cosf(angle);

    out->m[0] = c;
    out->m[1] = s;
    out->m[2] = 0.0f;
    out->m[3] = -s;
    out->m[4] = c;
    out->m[5] = 0.0f;
    out->m[6] = 0.0f;
    out->m[7] = 0.0f;
    out->m[8] = 1.0f;
}
