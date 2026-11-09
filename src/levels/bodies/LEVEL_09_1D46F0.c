/* LEVEL_09:0x1D46F0 -- placement copy of FRONTEND_023808.c: copies two 64-bit arguments, calls a helper pair and a final call. */
extern void func_1D4410(double *, char *);
extern double func_1D44B0(char *, char *, char *);
extern double func_1D42E0(double);

double func_1D46F0(double first, double second)
{
    char left[32];
    char right[32];
    char output[32];
    double a = first;
    double b = second;
    double value;
    func_1D4410(&a, left);
    func_1D4410(&b, right);
    value = func_1D44B0(left, right, output);
    return func_1D42E0(value);
}
