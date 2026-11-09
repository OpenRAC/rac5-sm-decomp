/* LEVEL_18:0x197820 -- placement copy of FRONTEND_023860.c. */
/* FRONTEND.REL:0x023860: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +0.
 * Recheck stack object types and the argument-copy order against callers. No matching credit.
 */
extern void func_1974E8(long long *, char *);
extern long long func_197588(char *, char *, char *);
extern void func_1973B8(long long);

void func_197820(long long first, long long second)
{
    char left[32];
    char right[32];
    char output[32];
    long long a = first;
    long long b = second;
    long long value;
    func_1974E8(&a, left);
    func_1974E8(&b, right);
    *(unsigned int *)(right + 4) ^= 1u;
    value = func_197588(left, right, output);
    func_1973B8(value);
}
