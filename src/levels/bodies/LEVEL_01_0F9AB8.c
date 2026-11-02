extern char D_000F8ED0[];
extern char D_000F8D30[];
extern void func_096948(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_096B20(void *out);

void func_0F9AB8(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_096948(local, mode, D_000F8ED0, 56, 0, -1, D_000F8D30);
    func_096B20(local);
}
