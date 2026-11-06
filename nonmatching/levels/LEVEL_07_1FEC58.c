/* LEVEL_07.REL:0x1FEC58: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +0.
 * Recheck stack object types and the argument-copy order against callers. No matching credit.
 */
extern void func_1FE920(long long *, char *);
extern long long func_1FE9C0(char *, char *, char *);
extern void func_1FE7F0(long long);

void func_1FEC58(long long first, long long second)
{
    char left[32];
    char right[32];
    char output[32];
    long long a = first;
    long long b = second;
    long long value;
    func_1FE920(&a, left);
    func_1FE920(&b, right);
    *(unsigned int *)(right + 4) ^= 1u;
    value = func_1FE9C0(left, right, output);
    func_1FE7F0(value);
}
