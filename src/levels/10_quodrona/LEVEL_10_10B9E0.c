extern char D_0010B208[];
extern char D_0010B048[];
extern void func_096CB8(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_096E90(void *out);

void func_10B9E0(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 24u;
    mode &= 0xFFFFFFFCu;
    func_096CB8(local, mode | 1u, D_0010B208, 64, 0, -1, D_0010B048);
    func_096E90(local);
}
