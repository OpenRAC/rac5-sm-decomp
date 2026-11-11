extern char D_000E3590[];
extern char D_000E3480[];
extern void func_094040(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_094218(void *out);

int func_0E3BF8(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_094040(local, mode, D_000E3590, 44, 0, -1, D_000E3480);
    return func_094218(local);
}
