/* LEVEL_23:0x1BDD20 -- placement copy of FRONTEND_023860.c. */
/* FRONTEND.REL:0x023860: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +0.
 * Recheck stack object types and the argument-copy order against callers. No matching credit.
 */
extern void func_1BD9E8(long long *, char *);
extern long long func_1BDA88(char *, char *, char *);
extern void func_1BD8B8(long long);

void func_1BDD20(long long first, long long second)
{
    char left[32];
    char right[32];
    char output[32];
    long long a = first;
    long long b = second;
    long long value;
    func_1BD9E8(&a, left);
    func_1BD9E8(&b, right);
    *(unsigned int *)(right + 4) ^= 1u;
    value = func_1BDA88(left, right, output);
    func_1BD8B8(value);
}
