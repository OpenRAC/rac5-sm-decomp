extern char D_000D4720[];
extern char D_000D45A8[];
extern void func_087530(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_087708(void *out);

void func_0D4E10(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_087530(local, mode, D_000D4720, 64, 0, -1, D_000D45A8);
    func_087708(local);
}
