/* LEVEL_08.REL:0x233468: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +0.
 * Recheck stack object types and the argument-copy order against callers. No matching credit.
 */
extern void func_233130(long long *, char *);
extern long long func_2331D0(char *, char *, char *);
extern void func_233000(long long);

void func_233468(long long first, long long second)
{
    char left[32];
    char right[32];
    char output[32];
    long long a = first;
    long long b = second;
    long long value;
    func_233130(&a, left);
    func_233130(&b, right);
    *(unsigned int *)(right + 4) ^= 1u;
    value = func_2331D0(left, right, output);
    func_233000(value);
}
