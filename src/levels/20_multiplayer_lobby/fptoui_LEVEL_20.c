/* LEVEL_20:0x0F9448 -- placement copy of LEVEL_01_1EB278.c: parses a float into kind, sign, shift and value and returns a shifted or all-ones word. */
struct ParsedValue { unsigned int kind; int sign; int shift; unsigned int value; };
extern void func_0F9388(float *, struct ParsedValue *);
unsigned int fptoui(float input)
{
    struct ParsedValue parsed;
    float work[4];
    work[0] = input;
    func_0F9388(work, &parsed);
    if ((parsed.kind ^ 2) == 0) return 0;
    if (parsed.kind < 2) return 0;
    if (parsed.sign != 0) return 0;
    if ((parsed.kind ^ 4) == 0) return 0xffffffffu;
    if (parsed.shift < 0) return 0;
    if (parsed.shift >= 32) return 0xffffffffu;
    if (parsed.shift < 31)
        return parsed.value >> (30 - parsed.shift);
    return parsed.value << (parsed.shift - 30);
}
