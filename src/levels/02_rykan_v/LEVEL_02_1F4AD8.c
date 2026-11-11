extern char D_001F2090[];
extern void func_09D018(void *, void *, void *, int, int, int, void *);
extern int func_09D1F0(void *);

int func_1F4AD8(void *first, void *second)
{
    char scratch[16];
    func_09D018(scratch, first, D_001F2090, 56, 0, -1, second);
    return func_09D1F0(scratch);
}
