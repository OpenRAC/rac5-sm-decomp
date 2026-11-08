/* LEVEL_02.REL:0x12EDC0: reviewed 196-byte candidate.
 * pinned C with gnu-ee-trial links 196 bytes; first differs at +2.
 * Retry: Recover float live ranges or a qualified allocator route that matches the
 * retail floating-register assignment from the first matrix load; current C links 196
 * B and first differs at +2 across five cc1 alternatives.
 * No matching credit.
 */
void func_12EDC0(float x, float y, float z, float *out,
                 void *unused, const float *matrix)
{
    float m1 = matrix[1];
    float m5 = matrix[5];
    float m0 = matrix[0];
    float m4 = matrix[4];
    float m2 = matrix[2];
    float m6 = matrix[6];
    float m8 = matrix[8];
    float m10 = matrix[10];
    float m9 = matrix[9];
    float m14 = matrix[14];
    float m12 = matrix[12];
    float m13 = matrix[13];
    float ty = x * m1 + y * m5 + z * m9 + m13;
    float tx = x * m0 + y * m4 + z * m8 + m12;
    float tz = x * m2 + y * m6 + z * m10 + m14;

    out[0] = m0;
    out[15] = 1.0f;
    out[1] = m1;
    out[2] = m2;
    out[4] = m4;
    out[5] = m5;
    out[6] = m6;
    out[8] = m8;
    out[9] = m9;
    out[10] = m10;
    out[12] = tx;
    out[13] = ty;
    out[14] = tz;
    out[3] = 0.0f;
    out[7] = 0.0f;
    out[11] = 0.0f;
}
