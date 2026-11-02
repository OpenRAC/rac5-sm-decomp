extern char D_0011B870[];
extern char D_0011B6B0[];
extern void func_09E868(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_09EA40(void *out);

void func_11C048(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 24u;
    mode &= 0xFFFFFFFCu;
    func_09E868(local, mode | 1u, D_0011B870, 64, 0, -1, D_0011B6B0);
    func_09EA40(local);
}
