/* LEVEL_24:0x1BB5B8 -- placement copy of FRONTEND_023860.c. */
/* FRONTEND.REL:0x023860: USA candidate; Ghidra body 100 bytes.
 * Pinned C links 100 bytes, first difference at +0.
 * Recheck stack object types and the argument-copy order against callers. No matching credit.
 */
extern void func_1BB280(double *, char *);
extern long long func_1BB320(char *, char *, char *);
extern double func_1BB150(long long);

double func_1BB5B8(double first, double second) {
    char left[32];
    char right[32];
    char output[32];
    double a = first;
    double b = second;
    long long value;
    func_1BB280(&a, left);
    func_1BB280(&b, right);
    *(unsigned int *)(right + 4) ^= 1u;
    value = func_1BB320(left, right, output);
    return func_1BB150(value);
}
