extern char D_001E66A0[];
extern char D_001E6510[];
extern void func_096578(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_096750(void *out);

void func_1E6450(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_096578(local, mode, D_001E66A0, 60, 0, -1, D_001E6510);
    func_096750(local);
}
