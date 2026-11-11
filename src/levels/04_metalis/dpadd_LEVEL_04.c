/* LEVEL_04:0x203A48 -- placement copy of FRONTEND_023808.c: copies two 64-bit arguments, calls a helper pair and a final call. */
extern void func_203768(double *, char *);
extern double func_203808(char *, char *, char *);
extern double func_203638(double);

double dpadd(double first, double second)
{
    char left[32];
    char right[32];
    char output[32];
    double a = first;
    double b = second;
    double value;
    func_203768(&a, left);
    func_203768(&b, right);
    value = func_203808(left, right, output);
    return func_203638(value);
}
