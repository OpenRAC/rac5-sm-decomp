extern char D_0010B0D0[];
extern char D_0010AF10[];
extern void func_096948(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_096B20(void *out);

void func_10B8A8(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 24u;
    mode &= 0xFFFFFFFCu;
    func_096948(local, mode | 1u, D_0010B0D0, 64, 0, -1, D_0010AF10);
    func_096B20(local);
}
