extern char D_0010C8C0[];
extern char D_0010C710[];
extern void func_09E868(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_09EA40(void *out);

int func_10D720(unsigned int value)
{
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_09E868(local, mode | 1u, D_0010C8C0, 52, 0, -1, D_0010C710);
    return func_09EA40(local);
}
