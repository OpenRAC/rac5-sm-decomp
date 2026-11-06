/* LEVEL_17.REL:0x189970: USA candidate; Ghidra body 88 bytes.
 * Pinned C links 88 bytes, first difference at +0.
 * Recheck stack object types and the argument-copy order against callers. No matching credit.
 */
extern void func_189690(long long *, char *);
extern long long func_189730(char *, char *, char *);
extern void func_189560(long long);

void func_189970(long long first, long long second)
{
    char left[32];
    char right[32];
    char output[32];
    long long a = first;
    long long b = second;
    long long value;
    func_189690(&a, left);
    func_189690(&b, right);
    value = func_189730(left, right, output);
    func_189560(value);
}
