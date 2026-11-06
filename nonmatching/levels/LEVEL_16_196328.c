/* LEVEL_16.REL:0x196328: USA candidate; Ghidra body 88 bytes.
 * Pinned C links 88 bytes, first difference at +0.
 * Recheck stack object types and the argument-copy order against callers. No matching credit.
 */
extern void func_196048(long long *, char *);
extern long long func_1960E8(char *, char *, char *);
extern void func_195F18(long long);

void func_196328(long long first, long long second)
{
    char left[32];
    char right[32];
    char output[32];
    long long a = first;
    long long b = second;
    long long value;
    func_196048(&a, left);
    func_196048(&b, right);
    value = func_1960E8(left, right, output);
    func_195F18(value);
}
