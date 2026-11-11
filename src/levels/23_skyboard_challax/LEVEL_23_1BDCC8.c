/* LEVEL_23:0x1BDCC8 -- placement copy of FRONTEND_023808.c: copies two 64-bit arguments, calls a helper pair and a final call. */
extern void func_1BD9E8(double *, char *);
extern double func_1BDA88(char *, char *, char *);
extern double func_1BD8B8(double);

double func_1BDCC8(double first, double second)
{
    char left[32];
    char right[32];
    char output[32];
    double a = first;
    double b = second;
    double value;
    func_1BD9E8(&a, left);
    func_1BD9E8(&b, right);
    value = func_1BDA88(left, right, output);
    return func_1BD8B8(value);
}
