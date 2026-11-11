/* LEVEL_24:0x1BB560 -- placement copy of FRONTEND_023808.c: copies two 64-bit arguments, calls a helper pair and a final call. */
extern void func_1BB280(double *, char *);
extern double func_1BB320(char *, char *, char *);
extern double func_1BB150(double);

double dpadd(double first, double second)
{
    char left[32];
    char right[32];
    char output[32];
    double a = first;
    double b = second;
    double value;
    func_1BB280(&a, left);
    func_1BB280(&b, right);
    value = func_1BB320(left, right, output);
    return func_1BB150(value);
}
