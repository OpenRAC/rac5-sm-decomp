extern char D_001EBBB0[];
extern void func_0987D0(void *, void *, void *, int, int, int, void *);
extern int func_0989A8(void *);

int func_1EE5F8(void *first, void *second)
{
    char scratch[16];
    func_0987D0(scratch, first, D_001EBBB0, 56, 0, -1, second);
    return func_0989A8(scratch);
}
