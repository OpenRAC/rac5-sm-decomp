/* LEVEL_01.REL:0x11B348: Ghidra body 160 bytes.
 * Pinned pure C links 160 bytes and first differs at +24.
 * Recheck floating-point register allocation and source load order. No matching credit.
 */
void func_11B348(float *out, const float *extent,
                 const float *first, const float *second, const float *third)
{
    float a0 = first[0];
    float a1 = first[1];
    float b1 = second[1];
    float b0 = second[0];
    float e0 = extent[0];
    float e1 = extent[1];
    float c0 = third[0];
    float c1 = third[1];
    float e2 = extent[2];
    out[2] = __builtin_fabsf(first[2]) * e0 +
             __builtin_fabsf(second[2]) * e1 +
             __builtin_fabsf(third[2]) * e2;
    out[0] = __builtin_fabsf(a0) * e0 +
             __builtin_fabsf(b0) * e1 +
             __builtin_fabsf(c0) * e2;
    out[1] = __builtin_fabsf(a1) * e0 +
             __builtin_fabsf(b1) * e1 +
             __builtin_fabsf(c1) * e2;
}
