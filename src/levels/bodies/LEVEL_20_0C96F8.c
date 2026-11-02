extern char D_000C8F20[];
extern char D_000C8D60[];
extern void func_074D68(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_074F40(void *out);

void func_0C96F8(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 24u;
    mode &= 0xFFFFFFFCu;
    func_074D68(local, mode | 1u, D_000C8F20, 64, 0, -1, D_000C8D60);
    func_074F40(local);
}
