extern char D_001DE370[];
extern void func_096948(void *, void *, void *, int, int, int, void *);
extern void func_096B20(void *);

void func_1DFE80(void *first, void *second)
{
    char scratch[16];
    func_096948(scratch, first, D_001DE370, 72, 0, -1, second);
    func_096B20(scratch);
}
