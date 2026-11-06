/* LEVEL_01.REL:0x123E80: Ghidra body 144 bytes.
 * Pinned pure C links 144 bytes and first differs at +16.
 * Recheck float register lifetimes and matrix field store order. No matching credit.
 */
extern float sinf(float);
extern float cosf(float);

void func_123E80(float angle, float *matrix)
{
    float sine = sinf(angle);
    float cosine = cosf(angle);
    matrix[8] = sine;
    matrix[15] = 1.0f;
    matrix[2] = -sine;
    matrix[10] = cosine;
    matrix[0] = cosine;
    matrix[1] = 0.0f;
    matrix[3] = 0.0f;
    matrix[4] = 0.0f;
    matrix[5] = 1.0f;
    matrix[6] = 0.0f;
    matrix[7] = 0.0f;
    matrix[9] = 0.0f;
    matrix[11] = 0.0f;
    matrix[12] = 0.0f;
    matrix[13] = 0.0f;
    matrix[14] = 0.0f;
}
