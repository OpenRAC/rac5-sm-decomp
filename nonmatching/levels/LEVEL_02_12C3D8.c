/* LEVEL_02.REL:0x12C3D8: reviewed 136-byte candidate.
 * pinned C with gnu-ee-trial links 136 bytes; first differs at +4.
 * Retry: Recover the matrix product's interleaved floating-point load and accumulator
 * lifetimes under a qualified compiler route.
 * No matching credit.
 */
void func_12C3D8(float x, float y, float z, float *out, const float *matrix)
{
    out[0] = x * matrix[0] + y * matrix[3] + z * matrix[6] + matrix[9];
    out[2] = x * matrix[2] + y * matrix[5] + z * matrix[8] + matrix[11];
    out[1] = x * matrix[1] + y * matrix[4] + z * matrix[7] + matrix[10];
}
