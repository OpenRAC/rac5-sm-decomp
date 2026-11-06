/* LEVEL_22.REL:0x149C40: USA candidate; Ghidra body 88 bytes.
 * Pinned C links 88 bytes, first difference at +0.
 * Recheck stack object types and the argument-copy order against callers. No matching credit.
 */
extern void func_149960(long long *, char *);
extern long long func_149A00(char *, char *, char *);
extern void func_149830(long long);

void func_149C40(long long first, long long second)
{
    char left[32];
    char right[32];
    char output[32];
    long long a = first;
    long long b = second;
    long long value;
    func_149960(&a, left);
    func_149960(&b, right);
    value = func_149A00(left, right, output);
    func_149830(value);
}
