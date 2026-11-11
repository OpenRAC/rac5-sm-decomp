/* LEVEL_06:0x1D9828 -- placement copy of FRONTEND_023860.c. */
/* FRONTEND.REL:0x023860: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +0.
 * Recheck stack object types and the argument-copy order against callers. No matching credit.
 */
extern void func_1D94F0(double *, char *);
extern long long func_1D9590(char *, char *, char *);
extern double func_1D93C0(long long);

double dpsub(double first, double second) {
    char left[32];
    char right[32];
    char output[32];
    double a = first;
    double b = second;
    long long value;
    func_1D94F0(&a, left);
    func_1D94F0(&b, right);
    *(unsigned int *)(right + 4) ^= 1u;
    value = func_1D9590(left, right, output);
    return func_1D93C0(value);
}
