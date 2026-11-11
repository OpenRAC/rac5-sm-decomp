extern char D_001F21C8[];
extern void func_096578(void *, void *, void *, int, int, int, void *);
extern int func_096750(void *);

int func_1F4C10(void *first, void *second)
{
    char scratch[16];
    func_096578(scratch, first, D_001F21C8, 56, 0, -1, second);
    return func_096750(scratch);
}
