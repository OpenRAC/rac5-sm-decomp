/* LEVEL_01:0x1EA888 -- placement copy of FRONTEND_023808.c: copies two 64-bit arguments, calls a helper pair and a final call. */
extern void func_1EA5A8(double *, char *);
extern double func_1EA648(char *, char *, char *);
extern double func_1EA478(double);

double dpadd(double first, double second)
{
    char left[32];
    char right[32];
    char output[32];
    double a = first;
    double b = second;
    double value;
    func_1EA5A8(&a, left);
    func_1EA5A8(&b, right);
    value = func_1EA648(left, right, output);
    return func_1EA478(value);
}
