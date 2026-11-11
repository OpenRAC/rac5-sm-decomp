/* LEVEL_05:0x1D9C80 -- placement copy of FRONTEND_023808.c: copies two 64-bit arguments, calls a helper pair and a final call. */
extern void func_1D99A0(double *, char *);
extern double func_1D9A40(char *, char *, char *);
extern double func_1D9870(double);

double dpadd(double first, double second)
{
    char left[32];
    char right[32];
    char output[32];
    double a = first;
    double b = second;
    double value;
    func_1D99A0(&a, left);
    func_1D99A0(&b, right);
    value = func_1D9A40(left, right, output);
    return func_1D9870(value);
}
