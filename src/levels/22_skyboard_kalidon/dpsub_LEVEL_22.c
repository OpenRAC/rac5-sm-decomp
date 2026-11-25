/* LEVEL_22:0x149C98 -- placement copy of FRONTEND_023860.c. */
/* FRONTEND.REL:0x023860: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +0.
 * Recheck stack object types and the argument-copy order against callers. No matching credit.
 */
extern void func_149960(double *, char *);
extern char *func_149A00(char *, char *, char *);
extern double func_149830(char *);

double dpsub(double first, double second) {
    char left[32];
    char right[32];
    char output[32];
    double a = first;
    double b = second;
    char *value;
    func_149960(&a, left);
    func_149960(&b, right);
    *(unsigned int *)(right + 4) ^= 1u;
    value = func_149A00(left, right, output);
    return func_149830(value);
}
