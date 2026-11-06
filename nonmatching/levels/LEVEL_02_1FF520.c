/* LEVEL_02.REL:0x1FF520: USA candidate; Ghidra body 88 bytes.
 * Pinned C links 88 bytes, first difference at +0.
 * Recheck stack object types and the argument-copy order against callers. No matching credit.
 */
extern void func_1FF240(long long *, char *);
extern long long func_1FF2E0(char *, char *, char *);
extern void func_1FF110(long long);

void func_1FF520(long long first, long long second)
{
    char left[32];
    char right[32];
    char output[32];
    long long a = first;
    long long b = second;
    long long value;
    func_1FF240(&a, left);
    func_1FF240(&b, right);
    value = func_1FF2E0(left, right, output);
    func_1FF110(value);
}
