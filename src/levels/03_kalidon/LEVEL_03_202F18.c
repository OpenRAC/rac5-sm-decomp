/* LEVEL_03:0x202F18 -- placement copy of FRONTEND_023808.c: copies two 64-bit arguments, calls a helper pair and a final call. */
extern void func_202C38(double *, char *);
extern double func_202CD8(char *, char *, char *);
extern double func_202B08(double);

double func_202F18(double first, double second)
{
    char left[32];
    char right[32];
    char output[32];
    double a = first;
    double b = second;
    double value;
    func_202C38(&a, left);
    func_202C38(&b, right);
    value = func_202CD8(left, right, output);
    return func_202B08(value);
}
