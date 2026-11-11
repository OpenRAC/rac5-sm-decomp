extern char D_000D3838[];
extern char D_000D3678[];
extern void func_07A808(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_07A9E0(void *out);

void func_0D4010(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 24u;
    mode &= 0xFFFFFFFCu;
    func_07A808(local, mode | 1u, D_000D3838, 64, 0, -1, D_000D3678);
    func_07A9E0(local);
}
