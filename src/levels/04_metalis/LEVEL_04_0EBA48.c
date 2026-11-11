extern char D_000EB3E0[];
extern char D_000EB2D0[];
extern void func_099A40(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern int func_099C18(void *out);

int func_0EBA48(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_099A40(local, mode, D_000EB3E0, 44, 0, -1, D_000EB2D0);
    return func_099C18(local);
}
