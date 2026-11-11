extern char D_001B5570[];
extern void func_08F748(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern int func_08F920(void *out);

int func_1B5E70(void *arg)
{
    char local[16];
    func_08F748(local, arg, D_001B5570, 40, 0, 2, 0);
    return func_08F920(local);
}
