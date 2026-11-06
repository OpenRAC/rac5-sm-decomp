/* LEVEL_09.REL:0x1D46F0: USA candidate; Ghidra body 88 bytes.
 * Pinned C links 88 bytes, first difference at +0.
 * Recheck stack object types and the argument-copy order against callers. No matching credit.
 */
extern void func_1D4410(long long *, char *);
extern long long func_1D44B0(char *, char *, char *);
extern void func_1D42E0(long long);

void func_1D46F0(long long first, long long second)
{
    char left[32];
    char right[32];
    char output[32];
    long long a = first;
    long long b = second;
    long long value;
    func_1D4410(&a, left);
    func_1D4410(&b, right);
    value = func_1D44B0(left, right, output);
    func_1D42E0(value);
}
