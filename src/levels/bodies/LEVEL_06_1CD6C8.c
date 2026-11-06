extern char D_001CBBB8[];
extern void func_08F598(void *, void *, void *, int, int, int, void *);
extern void func_08F770(void *);

void func_1CD6C8(void *first, void *second)
{
    char scratch[16];
    func_08F598(scratch, first, D_001CBBB8, 72, 0, -1, second);
    func_08F770(scratch);
}
