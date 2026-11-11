/* LEVEL_21:0x13F580 -- placement copy of FRONTEND_023808.c: copies two 64-bit arguments, calls a helper pair and a final call. */
extern void func_13F2A0(double *, char *);
extern double func_13F340(char *, char *, char *);
extern double func_13F170(double);

double dpadd(double first, double second)
{
    char left[32];
    char right[32];
    char output[32];
    double a = first;
    double b = second;
    double value;
    func_13F2A0(&a, left);
    func_13F2A0(&b, right);
    value = func_13F340(left, right, output);
    return func_13F170(value);
}
