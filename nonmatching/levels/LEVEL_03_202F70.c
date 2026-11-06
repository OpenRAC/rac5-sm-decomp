/* LEVEL_03.REL:0x202F70: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +0.
 * Recheck stack object types and the argument-copy order against callers. No matching credit.
 */
extern void func_202C38(long long *, char *);
extern long long func_202CD8(char *, char *, char *);
extern void func_202B08(long long);

void func_202F70(long long first, long long second)
{
    char left[32];
    char right[32];
    char output[32];
    long long a = first;
    long long b = second;
    long long value;
    func_202C38(&a, left);
    func_202C38(&b, right);
    *(unsigned int *)(right + 4) ^= 1u;
    value = func_202CD8(left, right, output);
    func_202B08(value);
}
