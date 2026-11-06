/* LEVEL_01.REL:0x1EA888: USA candidate; Ghidra body 88 bytes.
 * Pinned C links 88 bytes, first difference at +0.
 * Recheck stack object types and the argument-copy order against callers. No matching credit.
 */
extern void func_1EA5A8(long long *, char *);
extern long long func_1EA648(char *, char *, char *);
extern void func_1EA478(long long);

void func_1EA888(long long first, long long second)
{
    char left[32];
    char right[32];
    char output[32];
    long long a = first;
    long long b = second;
    long long value;
    func_1EA5A8(&a, left);
    func_1EA5A8(&b, right);
    value = func_1EA648(left, right, output);
    func_1EA478(value);
}
