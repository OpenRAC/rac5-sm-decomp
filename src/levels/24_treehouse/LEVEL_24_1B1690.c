extern char D_001AEC48[];
extern void func_08F748(void *, void *, void *, int, int, int, void *);
extern int func_08F920(void *);

int func_1B1690(void *first, void *second)
{
    char scratch[16];
    func_08F748(scratch, first, D_001AEC48, 56, 0, -1, second);
    return func_08F920(scratch);
}
