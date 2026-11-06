/* LEVEL_01.REL:0x1EB050: Ghidra body 84 bytes.
 * Pinned pure C links 84 bytes and first differs at +41.
 * Recheck the parsed 64-bit result register and conditional move schedule. No matching credit.
 */
struct ParsedValue {
    int first;
    int second;
    int third;
    unsigned long long bits;
};

extern void func_1EA5A8(long long *, struct ParsedValue *);
extern void func_1EB310(int, int, int, unsigned int);

void func_1EB050(long long input)
{
    struct ParsedValue parsed;
    long long work[2];
    unsigned int result;
    work[0] = input;
    func_1EA5A8(work, &parsed);
    result = (unsigned int)((long long)(parsed.bits << 2) >> 32);
    if ((parsed.bits & 0x3fffffffULL) != 0)
        result |= 1;
    func_1EB310(parsed.first, parsed.second, parsed.third, result);
}
