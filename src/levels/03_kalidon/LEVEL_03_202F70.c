/* LEVEL_03:0x202F70 -- placement copy of FRONTEND_023860.c. */
/* FRONTEND.REL:0x023860: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +0.
 * Recheck stack object types and the argument-copy order against callers. No matching credit.
 */
extern void func_202C38(double *, char *);
extern long long func_202CD8(char *, char *, char *);
extern double func_202B08(long long);

double func_202F70(double first, double second) {
    char left[32];
    char right[32];
    char output[32];
    double a = first;
    double b = second;
    long long value;
    func_202C38(&a, left);
    func_202C38(&b, right);
    *(unsigned int *)(right + 4) ^= 1u;
    value = func_202CD8(left, right, output);
    return func_202B08(value);
}
