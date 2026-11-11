/* LEVEL_07:0x1FEC00 -- placement copy of FRONTEND_023808.c: copies two 64-bit arguments, calls a helper pair and a final call. */
extern void func_1FE920(double *, char *);
extern double func_1FE9C0(char *, char *, char *);
extern double func_1FE7F0(double);

double dpadd(double first, double second)
{
    char left[32];
    char right[32];
    char output[32];
    double a = first;
    double b = second;
    double value;
    func_1FE920(&a, left);
    func_1FE920(&b, right);
    value = func_1FE9C0(left, right, output);
    return func_1FE7F0(value);
}
