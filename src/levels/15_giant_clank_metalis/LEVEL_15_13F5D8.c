/* LEVEL_15:0x13F5D8 -- placement copy of FRONTEND_023860.c. */
/* FRONTEND.REL:0x023860: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +0.
 * Recheck stack object types and the argument-copy order against callers. No matching credit.
 */
extern void func_13F2A0(double *, char *);
extern long long func_13F340(char *, char *, char *);
extern double func_13F170(long long);

double func_13F5D8(double first, double second) {
    char left[32];
    char right[32];
    char output[32];
    double a = first;
    double b = second;
    long long value;
    func_13F2A0(&a, left);
    func_13F2A0(&b, right);
    *(unsigned int *)(right + 4) ^= 1u;
    value = func_13F340(left, right, output);
    return func_13F170(value);
}
