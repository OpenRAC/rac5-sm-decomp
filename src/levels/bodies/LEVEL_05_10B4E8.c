extern char D_0010A758[];
extern char D_0010A5E8[];
extern void func_094040(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_094218(void *out);

void func_10B4E8(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_094040(local, mode | 1u, D_0010A758, 28, 0, -1, D_0010A5E8);
    func_094218(local);
}
