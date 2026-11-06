/* FRONTEND.REL:0x023860: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +0.
 * Recheck stack object types and the argument-copy order against callers. No matching credit.
 */
extern void func_023528(long long *, char *);
extern long long func_0235C8(char *, char *, char *);
extern void func_0233F8(long long);

void func_023860(long long first, long long second)
{
    char left[32];
    char right[32];
    char output[32];
    long long a = first;
    long long b = second;
    long long value;
    func_023528(&a, left);
    func_023528(&b, right);
    *(unsigned int *)(right + 4) ^= 1u;
    value = func_0235C8(left, right, output);
    func_0233F8(value);
}
