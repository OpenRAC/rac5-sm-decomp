/* LEVEL_01.REL:0x11C068: Ghidra body 196 bytes.
 * Pure C with `pinned` links 188 bytes and first differs at +4.
 * Recheck vector operands and floating-point scheduling. No matching credit.
 */
extern void func_11B748(long long, long long, float *, long long, float *);

void func_11C068(float unused, float factor, long long first, long long second,
                 float *vector, long long third, float *scale,
                 float *row_zero, float *row_one, float *row_two)
{
    float result[3];
    float scaled[3];
    float x = vector[0];
    float y = vector[1];
    float z = vector[2];
    scaled[2] = factor * scale[2];
    scaled[0] = factor * scale[0];
    result[2] = x * row_two[0] + y * row_two[1] + z * row_two[2];
    result[1] = x * row_one[0] + y * row_one[1] + z * row_one[2];
    result[0] = x * row_zero[0] + y * row_zero[1] + z * row_zero[2];
    scaled[1] = factor * scale[1];
    func_11B748(first, second, result, third, scaled);
}
