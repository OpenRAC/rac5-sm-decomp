/* LEVEL_06.REL:0x1D97D0: USA candidate; Ghidra body 88 bytes.
 * Pinned C links 88 bytes, first difference at +0.
 * Recheck stack object types and the argument-copy order against callers. No matching credit.
 */
extern void func_1D94F0(long long *, char *);
extern long long func_1D9590(char *, char *, char *);
extern void func_1D93C0(long long);

void func_1D97D0(long long first, long long second)
{
    char left[32];
    char right[32];
    char output[32];
    long long a = first;
    long long b = second;
    long long value;
    func_1D94F0(&a, left);
    func_1D94F0(&b, right);
    value = func_1D9590(left, right, output);
    func_1D93C0(value);
}
