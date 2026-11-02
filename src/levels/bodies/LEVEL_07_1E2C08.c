extern char D_001E2E58[];
extern char D_001E2CC8[];
extern void func_0987D0(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_0989A8(void *out);

void func_1E2C08(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_0987D0(local, mode, D_001E2E58, 60, 0, -1, D_001E2CC8);
    func_0989A8(local);
}
