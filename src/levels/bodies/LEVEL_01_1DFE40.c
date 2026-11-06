extern char D_001DD3F8[];
extern void func_096948(void *, void *, void *, int, int, int, void *);
extern void func_096B20(void *);

void func_1DFE40(void *first, void *second)
{
    char scratch[16];
    func_096948(scratch, first, D_001DD3F8, 56, 0, -1, second);
    func_096B20(scratch);
}
