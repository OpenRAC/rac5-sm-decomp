extern char D_000F0AF0[];
extern char D_000F09E0[];
extern void func_09E868(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_09EA40(void *out);

int func_0F1158(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_09E868(local, mode, D_000F0AF0, 44, 0, -1, D_000F09E0);
    return func_09EA40(local);
}
