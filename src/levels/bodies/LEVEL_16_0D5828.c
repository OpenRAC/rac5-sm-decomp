extern char D_000D51C0[];
extern char D_000D50B0[];
extern void func_087530(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_087708(void *out);

void func_0D5828(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_087530(local, mode, D_000D51C0, 44, 0, -1, D_000D50B0);
    func_087708(local);
}
