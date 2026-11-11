extern char D_001F02E0[];
extern void func_096CB8(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern int func_096E90(void *out);

int func_1F0BA0(void *arg)
{
    char local[16];
    func_096CB8(local, arg, D_001F02E0, 32, 0, 2, 0);
    return func_096E90(local);
}
