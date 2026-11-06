extern char D_001EBBB0[];
extern void func_0987D0(void *, void *, void *, int, int, int, void *);
extern void func_0989A8(void *);

void func_1EE5F8(void *first, void *second)
{
    char scratch[16];
    func_0987D0(scratch, first, D_001EBBB0, 56, 0, -1, second);
    func_0989A8(scratch);
}
