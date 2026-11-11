/* LEVEL_02:0x1FF578 -- placement copy of FRONTEND_023860.c. */
/* FRONTEND.REL:0x023860: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +0.
 * Recheck stack object types and the argument-copy order against callers. No matching credit.
 */
extern void func_1FF240(double *, char *);
extern long long func_1FF2E0(char *, char *, char *);
extern double func_1FF110(long long);

double func_1FF578(double first, double second) {
    char left[32];
    char right[32];
    char output[32];
    double a = first;
    double b = second;
    long long value;
    func_1FF240(&a, left);
    func_1FF240(&b, right);
    *(unsigned int *)(right + 4) ^= 1u;
    value = func_1FF2E0(left, right, output);
    return func_1FF110(value);
}
