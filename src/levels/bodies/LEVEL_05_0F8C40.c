extern char D_000F7EC8[];
extern char D_000F7D68[];
extern void func_094040(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_094218(void *out);

void func_0F8C40(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_094040(local, mode | 1u, D_000F7EC8, 44, 0, -1, D_000F7D68);
    func_094218(local);
}
