extern char D_000E8F30[];
extern char D_000E8D80[];
extern void func_087530(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_087708(void *out);

void func_0E9D90(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_087530(local, mode | 1u, D_000E8F30, 52, 0, -1, D_000E8D80);
    func_087708(local);
}
