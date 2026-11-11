extern char D_001D1E90[];
extern void func_094040(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern int func_094218(void *out);

int func_1D2740(void *arg)
{
    char local[16];
    func_094040(local, arg, D_001D1E90, 32, 0, 2, 0);
    return func_094218(local);
}
