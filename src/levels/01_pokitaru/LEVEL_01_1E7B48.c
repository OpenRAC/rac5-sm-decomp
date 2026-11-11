extern char D_001E7288[];
extern void func_096948(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern int func_096B20(void *out);

int func_1E7B48(void *arg)
{
    char local[16];
    func_096948(local, arg, D_001E7288, 32, 0, 2, 0);
    return func_096B20(local);
}
