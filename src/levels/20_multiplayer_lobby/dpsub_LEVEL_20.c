/* LEVEL_20:0x0F8AB0 -- placement copy of FRONTEND_023860.c. */
/* FRONTEND.REL:0x023860: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +0.
 * Recheck stack object types and the argument-copy order against callers. No matching credit.
 */
extern void func_0F8778(double *, char *);
extern long long func_0F8818(char *, char *, char *);
extern double func_0F8648(long long);

double dpsub(double first, double second) {
    char left[32];
    char right[32];
    char output[32];
    double a = first;
    double b = second;
    long long value;
    func_0F8778(&a, left);
    func_0F8778(&b, right);
    *(unsigned int *)(right + 4) ^= 1u;
    value = func_0F8818(left, right, output);
    return func_0F8648(value);
}
