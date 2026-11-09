/* LEVEL_20:0x0F8A58 -- placement copy of FRONTEND_023808.c: copies two 64-bit arguments, calls a helper pair and a final call. */
extern void func_0F8778(double *, char *);
extern double func_0F8818(char *, char *, char *);
extern double func_0F8648(double);

double func_0F8A58(double first, double second)
{
    char left[32];
    char right[32];
    char output[32];
    double a = first;
    double b = second;
    double value;
    func_0F8778(&a, left);
    func_0F8778(&b, right);
    value = func_0F8818(left, right, output);
    return func_0F8648(value);
}
