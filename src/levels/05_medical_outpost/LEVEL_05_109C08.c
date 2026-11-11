extern char D_00109430[];
extern char D_00109270[];
extern void func_094040(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_094218(void *out);

void func_109C08(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 24u;
    mode &= 0xFFFFFFFCu;
    func_094040(local, mode | 1u, D_00109430, 64, 0, -1, D_00109270);
    func_094218(local);
}
