/* LEVEL_08:0x233410 -- placement copy of FRONTEND_023808.c: copies two 64-bit arguments, calls a helper pair and a final call. */
extern void func_233130(double *, char *);
extern double func_2331D0(char *, char *, char *);
extern double func_233000(double);

double dpadd(double first, double second)
{
    char left[32];
    char right[32];
    char output[32];
    double a = first;
    double b = second;
    double value;
    func_233130(&a, left);
    func_233130(&b, right);
    value = func_2331D0(left, right, output);
    return func_233000(value);
}
