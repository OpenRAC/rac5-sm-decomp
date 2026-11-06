/* LEVEL_01.REL:0x1EB278: Ghidra body 152 bytes.
 * Pinned pure C links 140 bytes and first differs at +28.
 * Recheck the parsed-value branch order after the floating input store. No matching credit.
 */
struct ParsedValue {
    unsigned int kind;
    int sign;
    int shift;
    unsigned int value;
};

extern void func_1EB1B8(float *, struct ParsedValue *);

unsigned int func_1EB278(float input)
{
    struct ParsedValue parsed;
    float work[4];
    work[0] = input;
    func_1EB1B8(work, &parsed);
    if (parsed.kind == 2 || parsed.kind < 2)
        return 0;
    if (parsed.sign != 0)
        return 0;
    if (parsed.kind != 4) {
        if (parsed.shift < 0)
            return 0;
        if (parsed.shift < 32) {
            if (parsed.shift < 31)
                return parsed.value >> (30 - parsed.shift);
            return parsed.value << (parsed.shift - 30);
        }
    }
    return 0xffffffffu;
}
