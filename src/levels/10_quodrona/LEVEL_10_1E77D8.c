extern char D_001E5CC8[];
extern void func_096CB8(void *, void *, void *, int, int, int, void *);
extern void func_096E90(void *);

void func_1E77D8(void *first, void *second)
{
    char scratch[16];
    func_096CB8(scratch, first, D_001E5CC8, 72, 0, -1, second);
    func_096E90(scratch);
}
