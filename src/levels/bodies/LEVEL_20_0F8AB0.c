/* LEVEL_20:0x0F8AB0 -- placement copy of FRONTEND_023860.c. */
/* FRONTEND.REL:0x023860: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +0.
 * Recheck stack object types and the argument-copy order against callers. No matching credit.
 */
extern void func_0F8778(long long *, char *);
extern long long func_0F8818(char *, char *, char *);
extern void func_0F8648(long long);

void func_0F8AB0(long long first, long long second)
{
    char left[32];
    char right[32];
    char output[32];
    long long a = first;
    long long b = second;
    long long value;
    func_0F8778(&a, left);
    func_0F8778(&b, right);
    *(unsigned int *)(right + 4) ^= 1u;
    value = func_0F8818(left, right, output);
    func_0F8648(value);
}
