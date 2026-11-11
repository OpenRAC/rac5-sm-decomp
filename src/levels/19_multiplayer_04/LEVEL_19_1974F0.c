/* LEVEL_19:0x1974F0 -- placement copy of FRONTEND_023808.c: copies two 64-bit arguments, calls a helper pair and a final call. */
extern void func_197210(double *, char *);
extern double func_1972B0(char *, char *, char *);
extern double func_1970E0(double);

double func_1974F0(double first, double second)
{
    char left[32];
    char right[32];
    char output[32];
    double a = first;
    double b = second;
    double value;
    func_197210(&a, left);
    func_197210(&b, right);
    value = func_1972B0(left, right, output);
    return func_1970E0(value);
}
