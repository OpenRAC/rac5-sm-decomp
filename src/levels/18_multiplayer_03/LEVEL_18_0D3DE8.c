extern char D_000D36F8[];
extern char D_000D3580[];
extern void func_086E78(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_087050(void *out);

void func_0D3DE8(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_086E78(local, mode, D_000D36F8, 64, 0, -1, D_000D3580);
    func_087050(local);
}
