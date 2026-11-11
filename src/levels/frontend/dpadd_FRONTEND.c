/* FRONTEND:0x023808 -- copies two 64-bit arguments, calls a helper pair and a final call. */
extern void func_023528(double *, char *);
extern double func_0235C8(char *, char *, char *);
extern double func_0233F8(double);

double dpadd(double first, double second)
{
    char left[32];
    char right[32];
    char output[32];
    double a = first;
    double b = second;
    double value;
    func_023528(&a, left);
    func_023528(&b, right);
    value = func_0235C8(left, right, output);
    return func_0233F8(value);
}
