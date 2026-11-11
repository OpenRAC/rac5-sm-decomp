extern char D_001400B8[];
extern char D_0013FF78[];
extern void func_0879E0(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_087BB8(void *out);

void func_141408(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_0879E0(local, mode | 1u, D_001400B8, 48, 0, -1, D_0013FF78);
    func_087BB8(local);
}
