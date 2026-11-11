extern char D_001DD3F8[];
extern void func_096948(void *, void *, void *, int, int, int, void *);
extern int func_096B20(void *);

int func_1DFE40(void *first, void *second)
{
    char scratch[16];
    func_096948(scratch, first, D_001DD3F8, 56, 0, -1, second);
    return func_096B20(scratch);
}
