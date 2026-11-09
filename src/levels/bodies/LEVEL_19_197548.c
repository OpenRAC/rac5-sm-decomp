/* LEVEL_19:0x197548 -- placement copy of FRONTEND_023860.c. */
/* FRONTEND.REL:0x023860: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +0.
 * Recheck stack object types and the argument-copy order against callers. No matching credit.
 */
extern void func_197210(long long *, char *);
extern long long func_1972B0(char *, char *, char *);
extern void func_1970E0(long long);

void func_197548(long long first, long long second)
{
    char left[32];
    char right[32];
    char output[32];
    long long a = first;
    long long b = second;
    long long value;
    func_197210(&a, left);
    func_197210(&b, right);
    *(unsigned int *)(right + 4) ^= 1u;
    value = func_1972B0(left, right, output);
    func_1970E0(value);
}
