extern char D_001028A8[];
extern char D_00102690[];
extern void func_0987D0(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_0989A8(void *out);

int func_103480(unsigned int value)
{
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_0987D0(local, mode | 1u, D_001028A8, 76, 0, -1, D_00102690);
    return func_0989A8(local);
}
