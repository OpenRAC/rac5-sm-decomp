extern char D_00229740[];
extern void func_09E868(void *out, void *arg, const void *data,
                        int size, int first, int second, int third);
extern int func_09EA40(void *out);

int func_22A040(void *arg)
{
    char local[16];
    func_09E868(local, arg, D_00229740, 40, 0, 2, 0);
    return func_09EA40(local);
}
