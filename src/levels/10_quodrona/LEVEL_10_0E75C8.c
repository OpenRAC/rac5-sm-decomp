extern char D_000E6F60[];
extern char D_000E6E50[];
extern void func_096CB8(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_096E90(void *out);

int func_0E75C8(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_096CB8(local, mode, D_000E6F60, 44, 0, -1, D_000E6E50);
    return func_096E90(local);
}
