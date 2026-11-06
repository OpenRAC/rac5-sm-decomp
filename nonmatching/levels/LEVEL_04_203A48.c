/* LEVEL_04.REL:0x203A48: USA candidate; Ghidra body 88 bytes.
 * Pinned C links 88 bytes, first difference at +0.
 * Recheck stack object types and the argument-copy order against callers. No matching credit.
 */
extern void func_203768(long long *, char *);
extern long long func_203808(char *, char *, char *);
extern void func_203638(long long);

void func_203A48(long long first, long long second)
{
    char left[32];
    char right[32];
    char output[32];
    long long a = first;
    long long b = second;
    long long value;
    func_203768(&a, left);
    func_203768(&b, right);
    value = func_203808(left, right, output);
    func_203638(value);
}
