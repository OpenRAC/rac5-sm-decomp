/* LEVEL_16:0x196328 -- placement copy of FRONTEND_023808.c: copies two 64-bit arguments, calls a helper pair and a final call. */
extern void func_196048(double *, char *);
extern double func_1960E8(char *, char *, char *);
extern double func_195F18(double);

double dpadd(double first, double second)
{
    char left[32];
    char right[32];
    char output[32];
    double a = first;
    double b = second;
    double value;
    func_196048(&a, left);
    func_196048(&b, right);
    value = func_1960E8(left, right, output);
    return func_195F18(value);
}
