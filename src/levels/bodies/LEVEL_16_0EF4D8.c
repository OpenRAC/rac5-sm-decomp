extern char D_000EED00[];
extern char D_000EEB40[];
extern void func_087530(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_087708(void *out);

void func_0EF4D8(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 24u;
    mode &= 0xFFFFFFFCu;
    func_087530(local, mode | 1u, D_000EED00, 64, 0, -1, D_000EEB40);
    func_087708(local);
}
