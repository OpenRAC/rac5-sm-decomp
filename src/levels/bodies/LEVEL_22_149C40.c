/* LEVEL_22:0x149C40 -- placement copy of FRONTEND_023808.c: copies two 64-bit arguments, calls a helper pair and a final call. */
extern void func_149960(double *, char *);
extern double func_149A00(char *, char *, char *);
extern double func_149830(double);

double func_149C40(double first, double second)
{
    char left[32];
    char right[32];
    char output[32];
    double a = first;
    double b = second;
    double value;
    func_149960(&a, left);
    func_149960(&b, right);
    value = func_149A00(left, right, output);
    return func_149830(value);
}
