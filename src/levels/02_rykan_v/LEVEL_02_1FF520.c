/* LEVEL_02:0x1FF520 -- placement copy of FRONTEND_023808.c: copies two 64-bit arguments, calls a helper pair and a final call. */
extern void func_1FF240(double *, char *);
extern double func_1FF2E0(char *, char *, char *);
extern double func_1FF110(double);

double func_1FF520(double first, double second)
{
    char left[32];
    char right[32];
    char output[32];
    double a = first;
    double b = second;
    double value;
    func_1FF240(&a, left);
    func_1FF240(&b, right);
    value = func_1FF2E0(left, right, output);
    return func_1FF110(value);
}
