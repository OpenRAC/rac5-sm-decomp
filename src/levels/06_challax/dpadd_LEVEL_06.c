/* LEVEL_06:0x1D97D0 -- placement copy of FRONTEND_023808.c: copies two 64-bit arguments, calls a helper pair and a final call. */
extern void func_1D94F0(double *, char *);
extern double func_1D9590(char *, char *, char *);
extern double func_1D93C0(double);

double dpadd(double first, double second)
{
    char left[32];
    char right[32];
    char output[32];
    double a = first;
    double b = second;
    double value;
    func_1D94F0(&a, left);
    func_1D94F0(&b, right);
    value = func_1D9590(left, right, output);
    return func_1D93C0(value);
}
