/* LEVEL_15.REL:0x13F580: USA candidate; Ghidra body 88 bytes.
 * Pinned C links 88 bytes, first difference at +0.
 * Recheck stack object types and the argument-copy order against callers. No matching credit.
 */
extern void func_13F2A0(long long *, char *);
extern long long func_13F340(char *, char *, char *);
extern void func_13F170(long long);

void func_13F580(long long first, long long second)
{
    char left[32];
    char right[32];
    char output[32];
    long long a = first;
    long long b = second;
    long long value;
    func_13F2A0(&a, left);
    func_13F2A0(&b, right);
    value = func_13F340(left, right, output);
    func_13F170(value);
}
