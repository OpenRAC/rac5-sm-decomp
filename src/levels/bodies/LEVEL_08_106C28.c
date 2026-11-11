extern char D_00106050[];
extern char D_00105EC0[];
extern void func_09E868(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_09EA40(void *out);

int func_106C28(unsigned int value)
{
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_09E868(local, mode, D_00106050, 56, 0, 2, D_00105EC0);
    return func_09EA40(local);
}
