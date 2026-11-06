/* LEVEL_10.REL:0x1F38E0: USA candidate; Ghidra body 88 bytes.
 * Pinned C links 88 bytes, first difference at +0.
 * Recheck stack object types and the argument-copy order against callers. No matching credit.
 */
extern void func_1F3600(long long *, char *);
extern long long func_1F36A0(char *, char *, char *);
extern void func_1F34D0(long long);

void func_1F38E0(long long first, long long second)
{
    char left[32];
    char right[32];
    char output[32];
    long long a = first;
    long long b = second;
    long long value;
    func_1F3600(&a, left);
    func_1F3600(&b, right);
    value = func_1F36A0(left, right, output);
    func_1F34D0(value);
}
