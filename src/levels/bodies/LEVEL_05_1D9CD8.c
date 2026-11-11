/* LEVEL_05:0x1D9CD8 -- placement copy of FRONTEND_023860.c. */
/* FRONTEND.REL:0x023860: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +0.
 * Recheck stack object types and the argument-copy order against callers. No matching credit.
 */
extern void func_1D99A0(double *, char *);
extern long long func_1D9A40(char *, char *, char *);
extern double func_1D9870(long long);

double func_1D9CD8(double first, double second) {
    char left[32];
    char right[32];
    char output[32];
    double a = first;
    double b = second;
    long long value;
    func_1D99A0(&a, left);
    func_1D99A0(&b, right);
    *(unsigned int *)(right + 4) ^= 1u;
    value = func_1D9A40(left, right, output);
    return func_1D9870(value);
}
