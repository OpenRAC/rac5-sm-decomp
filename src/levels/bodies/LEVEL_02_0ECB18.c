extern char D_000EC4B0[];
extern char D_000EC3A0[];
extern void func_09D018(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_09D1F0(void *out);

void func_0ECB18(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_09D018(local, mode, D_000EC4B0, 44, 0, -1, D_000EC3A0);
    func_09D1F0(local);
}
