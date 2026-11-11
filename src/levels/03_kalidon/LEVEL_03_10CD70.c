extern char D_0010BFE0[];
extern char D_0010BE70[];
extern void func_096578(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_096750(void *out);

void func_10CD70(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_096578(local, mode | 1u, D_0010BFE0, 28, 0, -1, D_0010BE70);
    func_096750(local);
}
