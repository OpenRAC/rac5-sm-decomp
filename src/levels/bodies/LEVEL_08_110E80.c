extern char D_001102A8[];
extern char D_00110090[];
extern void func_09E868(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_09EA40(void *out);

int func_110E80(unsigned int value)
{
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_09E868(local, mode | 1u, D_001102A8, 76, 0, -1, D_00110090);
    return func_09EA40(local);
}
