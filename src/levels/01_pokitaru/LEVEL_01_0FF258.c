extern char D_000FEAD8[];
extern char D_000FE968[];
extern void func_096948(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_096B20(void *out);

int func_0FF258(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_096948(local, mode, D_000FEAD8, 48, 0, -1, D_000FE968);
    return func_096B20(local);
}
