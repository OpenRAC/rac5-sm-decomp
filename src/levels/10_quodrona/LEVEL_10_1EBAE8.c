extern char D_001EAE28[];
extern void func_096CB8(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern int func_096E90(void *out);

int func_1EBAE8(void *arg)
{
    char local[16];
    func_096CB8(local, arg, D_001EAE28, 36, 0, 6, 0);
    return func_096E90(local);
}
