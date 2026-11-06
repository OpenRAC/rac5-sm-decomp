/* LEVEL_01.REL:0x11B168: Ghidra body 192 bytes.
 * Pinned pure C links 192 bytes and first differs at +0.
 * Recheck minimum/maximum update order and floating-point registers. No matching credit.
 */
void func_11B168(float *minimum, float *maximum, const float *point)
{
    float z = point[2];
    float x = point[0];
    float y = point[1];
    float max_x = maximum[0];
    float max_y = maximum[1];
    float max_z = maximum[2];
    minimum[0] = ((minimum[0] + x) - __builtin_fabsf(x - minimum[0])) * 0.5f;
    minimum[1] = ((minimum[1] + y) - __builtin_fabsf(y - minimum[1])) * 0.5f;
    minimum[2] = ((minimum[2] + z) - __builtin_fabsf(z - minimum[2])) * 0.5f;
    maximum[2] = (max_z + z + __builtin_fabsf(z - max_z)) * 0.5f;
    maximum[0] = (max_x + x + __builtin_fabsf(x - max_x)) * 0.5f;
    maximum[1] = (max_y + y + __builtin_fabsf(y - max_y)) * 0.5f;
}
