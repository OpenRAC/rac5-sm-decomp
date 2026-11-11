extern char D_0010E318[];
extern char D_0010E1A8[];
extern void func_096948(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_096B20(void *out);

void func_10F0A8(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_096948(local, mode | 1u, D_0010E318, 28, 0, -1, D_0010E1A8);
    func_096B20(local);
}
