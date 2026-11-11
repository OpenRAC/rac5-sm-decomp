extern char D_001F3410[];
extern void func_0987D0(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern int func_0989A8(void *out);

int func_1F3CC0(void *arg)
{
    char local[16];
    func_0987D0(local, arg, D_001F3410, 32, 0, 2, 0);
    return func_0989A8(local);
}
