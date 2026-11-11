/* LEVEL_18:0x197820 -- placement copy of FRONTEND_023860.c. */
/* FRONTEND.REL:0x023860: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +0.
 * Recheck stack object types and the argument-copy order against callers. No matching credit.
 */
extern void func_1974E8(double *, char *);
extern long long func_197588(char *, char *, char *);
extern double func_1973B8(long long);

double dpsub(double first, double second) {
    char left[32];
    char right[32];
    char output[32];
    double a = first;
    double b = second;
    long long value;
    func_1974E8(&a, left);
    func_1974E8(&b, right);
    *(unsigned int *)(right + 4) ^= 1u;
    value = func_197588(left, right, output);
    return func_1973B8(value);
}
