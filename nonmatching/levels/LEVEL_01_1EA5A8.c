/* LEVEL_01.REL:0x1EA5A8: reviewed 156-byte candidate.
 * pinned C with gnu-ee-trial links 160 bytes; first differs at +6.
 * Retry: Recover bit-extraction evaluation order and the 156-byte branch schedule;
 * current signed-exponent C links 160 bytes.
 * No matching credit.
 */
typedef unsigned long long u64;
typedef struct {
    int kind;
    int sign;
    int exponent;
    int pad;
    u64 fraction;
} Parts;

void func_1EA5A8(const u64 *input, Parts *output)
{
    u64 bits = *input;
    int sign = bits >> 63;
    u64 fraction = bits & ((u64)-1 >> 12);
    int exponent = (bits >> 52) & 0x7ff;
    output->sign = sign;
    if (exponent == 0) {
        output->kind = 2;
        return;
    }
    if (exponent == 0x7ff) {
        if (fraction == 0) {
            output->kind = 4;
            return;
        }
        if (fraction & ((u64)0x8000 << 36))
            output->kind = 1;
        else
            output->kind = 0;
        output->fraction = fraction;
        return;
    }
    output->fraction = (fraction << 8) | ((u64)0x8000 << 45);
    output->exponent = exponent - 0x3ff;
    output->kind = 3;
}
