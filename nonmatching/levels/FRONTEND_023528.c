/* FRONTEND.REL:0x023528: 21 reviewed USA placements.
 * Ghidra body: 152 bytes; pinned C links 140 bytes and first differs at +2.
 * Ghidra bounds the body at 152 bytes while the 156-byte candidate interval includes a nonzero next word; this 140-byte C still differs. Resolve the next instruction's ownership and IEEE field types.
 * This source has no matching credit.
 */
void func_023528(const unsigned long long *source, unsigned int *result)
{
    unsigned long long bits = *source;
    unsigned long long mantissa = bits & 0xfffffffffffffULL;
    unsigned int exponent = (bits >> 52) & 0x7ff;
    result[1] = bits >> 63;
    if (exponent == 0) {
        result[0] = 2;
        return;
    }
    if (exponent != 0x7ff) {
        *(unsigned long long *)(result + 4) =
            (mantissa << 8) | 0x1000000000000000ULL;
        result[2] = exponent - 0x3ff;
        result[0] = 3;
        return;
    }
    if (mantissa == 0) {
        result[0] = 4;
        return;
    }
    result[0] = (bits & 0x8000000000000ULL) != 0;
    *(unsigned long long *)(result + 4) = mantissa;
}
