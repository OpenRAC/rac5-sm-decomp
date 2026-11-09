/* LEVEL_01.REL:0x1EB278: reviewed 152-byte candidate, held for ABI review.
 * Parses a float into kind, sign, shift and value and returns a shifted or
 * all-ones word.
 * pinned C with gnu-ee-trial links 152/152 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It defines the function returning int with (float), but the accepted caller
 * LEVEL_01_03C150.c declares it returning int with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct ParsedValue { unsigned int kind; int sign; int shift; unsigned int value; };
extern void func_1EB1B8(float *, struct ParsedValue *);
unsigned int func_1EB278(float input)
{
    struct ParsedValue parsed;
    float work[4];
    work[0] = input;
    func_1EB1B8(work, &parsed);
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
