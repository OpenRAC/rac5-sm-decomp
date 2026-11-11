/* LEVEL_10:0x1F38E0 -- placement copy of FRONTEND_023808.c: copies two 64-bit arguments, calls a helper pair and a final call. */
extern void func_1F3600(double *, char *);
extern double func_1F36A0(char *, char *, char *);
extern double func_1F34D0(double);

double func_1F38E0(double first, double second)
{
    char left[32];
    char right[32];
    char output[32];
    double a = first;
    double b = second;
    double value;
    func_1F3600(&a, left);
    func_1F3600(&b, right);
    value = func_1F36A0(left, right, output);
    return func_1F34D0(value);
}
