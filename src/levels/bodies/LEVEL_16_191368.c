extern char D_0018E920[];
extern void func_087530(void *, void *, void *, int, int, int, void *);
extern void func_087708(void *);

void func_191368(void *first, void *second)
{
    char scratch[16];
    func_087530(scratch, first, D_0018E920, 56, 0, -1, second);
    func_087708(scratch);
}
