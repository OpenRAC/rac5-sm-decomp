extern char D_0018FBB0[];
extern void func_0879E0(void *, void *, void *, int, int, int, void *);
extern void func_087BB8(void *);

void func_1916C0(void *first, void *second)
{
    char scratch[16];
    func_0879E0(scratch, first, D_0018FBB0, 72, 0, -1, second);
    func_087BB8(scratch);
}
