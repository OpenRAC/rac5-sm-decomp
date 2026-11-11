/* LEVEL_16:0x196380 -- placement copy of FRONTEND_023860.c. */
/* FRONTEND.REL:0x023860: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +0.
 * Recheck stack object types and the argument-copy order against callers. No matching credit.
 */
extern void func_196048(double *, char *);
extern long long func_1960E8(char *, char *, char *);
extern double func_195F18(long long);

double func_196380(double first, double second) {
    char left[32];
    char right[32];
    char output[32];
    double a = first;
    double b = second;
    long long value;
    func_196048(&a, left);
    func_196048(&b, right);
    *(unsigned int *)(right + 4) ^= 1u;
    value = func_1960E8(left, right, output);
    return func_195F18(value);
}
