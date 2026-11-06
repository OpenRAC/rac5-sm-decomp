/* LEVEL_18.REL:0x1977C8: USA candidate; Ghidra body 88 bytes.
 * Pinned C links 88 bytes, first difference at +0.
 * Recheck stack object types and the argument-copy order against callers. No matching credit.
 */
extern void func_1974E8(long long *, char *);
extern long long func_197588(char *, char *, char *);
extern void func_1973B8(long long);

void func_1977C8(long long first, long long second)
{
    char left[32];
    char right[32];
    char output[32];
    long long a = first;
    long long b = second;
    long long value;
    func_1974E8(&a, left);
    func_1974E8(&b, right);
    value = func_197588(left, right, output);
    func_1973B8(value);
}
