/* LEVEL_01.REL:0x123F10: reviewed 144-byte candidate.
 * pinned C with gnu-ee-trial links 144 bytes; first differs at +16.
 * Retry: Recover sine/cosine matrix store scheduling and float register lifetimes;
 * compare the retained 0x123E80 neighbour.
 * No matching credit.
 */
typedef struct { float m[16]; } MATRIX;

extern float sinf(float value);
extern float cosf(float value);

void func_123F10(MATRIX *matrix, float angle) {
    float sine = sinf(angle);
    float cosine = cosf(angle);
    matrix->m[1] = sine;
    matrix->m[15] = 1.0f;
    matrix->m[4] = -sine;
    matrix->m[5] = cosine;
    matrix->m[0] = cosine;
    matrix->m[2] = 0.0f;
    matrix->m[3] = 0.0f;
    matrix->m[6] = 0.0f;
    matrix->m[7] = 0.0f;
    matrix->m[8] = 0.0f;
    matrix->m[9] = 0.0f;
    matrix->m[10] = 1.0f;
    matrix->m[11] = 0.0f;
    matrix->m[12] = 0.0f;
    matrix->m[13] = 0.0f;
    matrix->m[14] = 0.0f;
}
