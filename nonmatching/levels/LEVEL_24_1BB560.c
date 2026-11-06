/* LEVEL_24.REL:0x1BB560: USA candidate; Ghidra body 88 bytes.
 * Pinned C links 88 bytes, first difference at +0.
 * Recheck stack object types and the argument-copy order against callers. No matching credit.
 */
extern void func_1BB280(long long *, char *);
extern long long func_1BB320(char *, char *, char *);
extern void func_1BB150(long long);

void func_1BB560(long long first, long long second)
{
    char left[32];
    char right[32];
    char output[32];
    long long a = first;
    long long b = second;
    long long value;
    func_1BB280(&a, left);
    func_1BB280(&b, right);
    value = func_1BB320(left, right, output);
    func_1BB150(value);
}
