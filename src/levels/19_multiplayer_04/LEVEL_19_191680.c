extern char D_0018EC38[];
extern void func_0879E0(void *, void *, void *, int, int, int, void *);
extern void func_087BB8(void *);

void func_191680(void *first, void *second)
{
    char scratch[16];
    func_0879E0(scratch, first, D_0018EC38, 56, 0, -1, second);
    func_087BB8(scratch);
}
