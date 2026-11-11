extern char D_001CAC40[];
extern void func_08F598(void *, void *, void *, int, int, int, void *);
extern int func_08F770(void *);

int func_1CD688(void *first, void *second)
{
    char scratch[16];
    func_08F598(scratch, first, D_001CAC40, 56, 0, -1, second);
    return func_08F770(scratch);
}
