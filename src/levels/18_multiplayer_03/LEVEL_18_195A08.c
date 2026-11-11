extern char D_00194D48[];
extern void func_086E78(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern int func_087050(void *out);

int func_195A08(void *arg)
{
    char local[16];
    func_086E78(local, arg, D_00194D48, 36, 0, 6, 0);
    return func_087050(local);
}
