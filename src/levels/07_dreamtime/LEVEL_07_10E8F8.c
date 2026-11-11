extern char D_0010E120[];
extern char D_0010DF60[];
extern void func_0987D0(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_0989A8(void *out);

void func_10E8F8(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 24u;
    mode &= 0xFFFFFFFCu;
    func_0987D0(local, mode | 1u, D_0010E120, 64, 0, -1, D_0010DF60);
    func_0989A8(local);
}
