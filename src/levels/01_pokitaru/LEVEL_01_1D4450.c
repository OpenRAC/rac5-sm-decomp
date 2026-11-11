extern char D_001D46A0[];
extern char D_001D4510[];
extern void func_096948(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_096B20(void *out);

void func_1D4450(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_096948(local, mode, D_001D46A0, 60, 0, -1, D_001D4510);
    func_096B20(local);
}
