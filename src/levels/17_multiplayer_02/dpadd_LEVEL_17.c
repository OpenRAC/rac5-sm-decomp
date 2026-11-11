/* LEVEL_17:0x189970 -- placement copy of FRONTEND_023808.c: copies two 64-bit arguments, calls a helper pair and a final call. */
extern void func_189690(double *, char *);
extern double func_189730(char *, char *, char *);
extern double func_189560(double);

double dpadd(double first, double second)
{
    char left[32];
    char right[32];
    char output[32];
    double a = first;
    double b = second;
    double value;
    func_189690(&a, left);
    func_189690(&b, right);
    value = func_189730(left, right, output);
    return func_189560(value);
}
