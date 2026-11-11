/* LEVEL_19:0x197548 -- placement copy of FRONTEND_023860.c. */
/* FRONTEND.REL:0x023860: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +0.
 * Recheck stack object types and the argument-copy order against callers. No matching credit.
 */
extern void func_197210(double *, char *);
extern long long func_1972B0(char *, char *, char *);
extern double func_1970E0(long long);

double func_197548(double first, double second) {
    char left[32];
    char right[32];
    char output[32];
    double a = first;
    double b = second;
    long long value;
    func_197210(&a, left);
    func_197210(&b, right);
    *(unsigned int *)(right + 4) ^= 1u;
    value = func_1972B0(left, right, output);
    return func_1970E0(value);
}
