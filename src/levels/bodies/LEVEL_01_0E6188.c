extern char D_000E5B20[];
extern char D_000E5A10[];
extern void func_096948(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_096B20(void *out);

int func_0E6188(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_096948(local, mode, D_000E5B20, 44, 0, -1, D_000E5A10);
    return func_096B20(local);
}
