extern char D_00101A50[];
extern char D_001017F0[];
extern void func_096578(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_096750(void *out);

void func_102668(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 4u;
    mode &= 0xFFFFFFFCu;
    func_096578(local, mode | 1u, D_00101A50, 72, 0, -1, D_001017F0);
    func_096750(local);
}
