extern char D_001FA460[];
extern void func_096578(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern int func_096750(void *out);

int func_1FB120(void *arg)
{
    char local[16];
    func_096578(local, arg, D_001FA460, 36, 0, 6, 0);
    return func_096750(local);
}
