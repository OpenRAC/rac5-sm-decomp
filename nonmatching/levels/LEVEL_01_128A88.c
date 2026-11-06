/* LEVEL_01.REL:0x128A88: Ghidra body 196 bytes.
 * Pinned pure C links 196 bytes and first differs at +2.
 * Recheck matrix source load order and floating-point register lifetimes. No matching credit.
 */
void func_128A88(float x, float y, float z, float *out,
                 long long unused, const float *matrix)
{
    float m0 = matrix[0];
    float m1 = matrix[1];
    float m2 = matrix[2];
    float m4 = matrix[4];
    float m5 = matrix[5];
    float m6 = matrix[6];
    float m8 = matrix[8];
    float m9 = matrix[9];
    float m10 = matrix[10];
    float m12 = matrix[12];
    float m13 = matrix[13];
    float m14 = matrix[14];
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
    out[12] = x * m0 + y * m4 + z * m8 + m12;
    out[13] = x * m1 + y * m5 + z * m9 + m13;
    out[14] = x * m2 + y * m6 + z * m10 + m14;
    out[3] = 0.0f;
    out[7] = 0.0f;
    out[11] = 0.0f;
}
