extern char D_000E7CC0[];
extern char D_000E7B10[];
extern void func_0879E0(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_087BB8(void *out);

void func_0E8B20(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_0879E0(local, mode | 1u, D_000E7CC0, 52, 0, -1, D_000E7B10);
    func_087BB8(local);
}
