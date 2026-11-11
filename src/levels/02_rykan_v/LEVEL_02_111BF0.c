extern char D_00111418[];
extern char D_00111258[];
extern void func_09D018(void *out, unsigned int mode, const void *data,
                        int size, int first, int second, const void *extra);
extern void func_09D1F0(void *out);

void func_111BF0(unsigned int value) {
    char local[16];
    unsigned int mode = (value & 0xFFFFFFC3u) | 24u;
    mode &= 0xFFFFFFFCu;
    func_09D018(local, mode | 1u, D_00111418, 64, 0, -1, D_00111258);
    func_09D1F0(local);
}
