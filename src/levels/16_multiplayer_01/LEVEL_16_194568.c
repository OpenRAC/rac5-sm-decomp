extern char D_001938A8[];
extern void func_087530(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern int func_087708(void *out);

int func_194568(void *arg)
{
    char local[16];
    func_087530(local, arg, D_001938A8, 36, 0, 6, 0);
    return func_087708(local);
}
