extern char D_001CE700[];
extern void func_0930A0(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern int func_093278(void *out);

int func_1CF000(void *arg)
{
    char local[16];
    func_0930A0(local, arg, D_001CE700, 40, 0, 2, 0);
    return func_093278(local);
}
