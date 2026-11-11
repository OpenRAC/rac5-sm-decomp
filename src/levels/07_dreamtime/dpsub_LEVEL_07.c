/* LEVEL_07:0x1FEC58 -- placement copy of FRONTEND_023860.c. */
/* FRONTEND.REL:0x023860: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +0.
 * Recheck stack object types and the argument-copy order against callers. No matching credit.
 */
extern void func_1FE920(double *, char *);
extern long long func_1FE9C0(char *, char *, char *);
extern double func_1FE7F0(long long);

double dpsub(double first, double second) {
    char left[32];
    char right[32];
    char output[32];
    double a = first;
    double b = second;
    long long value;
    func_1FE920(&a, left);
    func_1FE920(&b, right);
    *(unsigned int *)(right + 4) ^= 1u;
    value = func_1FE9C0(left, right, output);
    return func_1FE7F0(value);
}
