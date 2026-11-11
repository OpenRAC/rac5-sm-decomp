extern char D_001AFBC0[];
extern void func_08F748(void *, void *, void *, int, int, int, void *);
extern void func_08F920(void *);

void func_1B16D0(void *first, void *second)
{
    char scratch[16];
    func_08F748(scratch, first, D_001AFBC0, 72, 0, -1, second);
    func_08F920(scratch);
}
