/* LEVEL_18:0x1977C8 -- placement copy of FRONTEND_023808.c: copies two 64-bit arguments, calls a helper pair and a final call. */
extern void func_1974E8(double *, char *);
extern double func_197588(char *, char *, char *);
extern double func_1973B8(double);

double dpadd(double first, double second)
{
    char left[32];
    char right[32];
    char output[32];
    double a = first;
    double b = second;
    double value;
    func_1974E8(&a, left);
    func_1974E8(&b, right);
    value = func_197588(left, right, output);
    return func_1973B8(value);
}
