extern char D_001035C0[];
extern char D_00103400[];
extern void func_08F598(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_08F770(void *out);

void func_103D98(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 24u;
    mode &= 0xFFFFFFFCu;
    func_08F598(local, mode | 1u, D_001035C0, 64, 0, -1, D_00103400);
    func_08F770(local);
}
