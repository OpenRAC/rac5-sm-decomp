extern char D_00112168[];
extern char D_00111F08[];
extern void func_09E868(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_09EA40(void *out);

void func_112D80(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_09E868(local, mode | 1u, D_00112168, 72, 0, -1, D_00111F08);
    func_09EA40(local);
}
