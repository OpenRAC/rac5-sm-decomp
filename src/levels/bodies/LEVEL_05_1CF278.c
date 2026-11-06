extern char D_001CD768[];
extern void func_094040(void *, void *, void *, int, int, int, void *);
extern void func_094218(void *);

void func_1CF278(void *first, void *second)
{
    char scratch[16];
    func_094040(scratch, first, D_001CD768, 72, 0, -1, second);
    func_094218(scratch);
}
