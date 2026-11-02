extern char D_001091B8[];
extern char D_00108F58[];
extern void func_096948(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_096B20(void *out);

void func_109DB8(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_096948(local, mode | 1u, D_001091B8, 80, 0, -1, D_00108F58);
    func_096B20(local);
}
