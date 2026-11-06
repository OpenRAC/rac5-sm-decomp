/* LEVEL_01.REL:0x126078: Ghidra body 136 bytes.
 * Pinned pure C links 136 bytes and first differs at +8.
 * Recheck column load order and floating-point scheduling. No matching credit.
 */
void func_126078(float x, float y, float z, float *out, const float *matrix)
{
    float m0 = matrix[0];
    float m1 = matrix[1];
    float m3 = matrix[3];
    float m4 = matrix[4];
    float m2 = matrix[2];
    float m5 = matrix[5];
    float m6 = matrix[6];
    float m7 = matrix[7];
    float m8 = matrix[8];
    float m9 = matrix[9];
    float m10 = matrix[10];
    float m11 = matrix[11];
    out[0] = x * m0 + y * m3 + z * m6 + m9;
    out[2] = x * m2 + y * m5 + z * m8 + m11;
    out[1] = x * m1 + y * m4 + z * m7 + m10;
}
