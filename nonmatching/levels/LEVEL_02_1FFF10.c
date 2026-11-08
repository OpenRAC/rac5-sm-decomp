/* LEVEL_02.REL:0x1FFF10: reviewed 152-byte candidate.
 * pinned C with gnu-ee-trial links 148 bytes; first differs at +30.
 * Retry: Recover the kind-2 / kind-below-2 branch layout and the 64-bit shift path
 * using a qualified source or new semantic evidence.
 * No matching credit.
 */
typedef struct { unsigned int kind; int error; int exponent; unsigned int bits; } Decoded;
extern void func_1FFE50(float *value, Decoded *decoded);
unsigned int func_1FFF10(float value)
{
    Decoded decoded;
    func_1FFE50(&value, &decoded);
    if (decoded.kind == 2) {
        if (decoded.error != 0)
            return 0;
    } else if (decoded.kind < 2) {
        return 0;
    }
    if (decoded.kind != 4) {
        if (decoded.exponent < 0)
            return 0;
        if (decoded.exponent < 32) {
            if (decoded.exponent < 31)
                return decoded.bits >> (30 - decoded.exponent);
            return decoded.bits << (decoded.exponent - 30);
        }
    }
    return 0xffffffffu;
}
