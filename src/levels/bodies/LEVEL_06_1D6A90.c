extern char D_001D61D0[];
extern void func_08F598(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern int func_08F770(void *out);

int func_1D6A90(void *arg)
{
    char local[16];
    func_08F598(local, arg, D_001D61D0, 32, 0, 2, 0);
    return func_08F770(local);
}
