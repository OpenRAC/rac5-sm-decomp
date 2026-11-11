extern char D_001F3140[];
extern void func_096578(void *, void *, void *, int, int, int, void *);
extern void func_096750(void *);

void func_1F4C50(void *first, void *second)
{
    char scratch[16];
    func_096578(scratch, first, D_001F3140, 72, 0, -1, second);
    func_096750(scratch);
}
